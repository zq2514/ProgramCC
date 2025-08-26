//�����������е�cpp�ļ�������дϵͳ�ڲ���include��ֻ��Ҫд�Լ���д��ͷ�ļ�
#include "workerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

WorkerManager::WorkerManager() // ����ǹ��캯���Ŀ�ʵ��
{
	//ͷ�ļ��а����˺���������
	//����ط�Ӧ��д������ʵ��
	// ����WorkerManager�У�����ʲô����д��
	// 
	// 
	////��ʼ��Ա������
	//this->m_EmpNum = 0;
	//// ��ʼ��Ա������
	//this->m_EmpArray = NULL;


	/* ���ļ��������������
	�ļ�������������
	�ļ�����������Ϊ�յ��������
	�ļ������ұ�����ְ�����������*/


	// �ļ�������������
	ifstream ifs;
	ifs.open(FILENAME,ios::in);

	// �ļ������ڵ����
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		//��ʼ��Ա������
		this->m_EmpNum = 0;
		// ��ʼ��Ա������
		this->m_EmpArray = NULL;
		// ��ʼ���ļ�Ϊ�յı�־
		this->m_FileIsEmpty = true;
		// �ر��ļ�
		ifs.close();

		return;
	}
	// �ļ����ڣ�������Ϊ�յ��������
	char ch;
	ifs >> ch;
	if (ifs.eof())  //end of file
	{
		cout << "�ļ�Ϊ��" << endl;
		this->m_EmpNum = 0;
		// ��ʼ��Ա������
		this->m_EmpArray = NULL;
		// ��ʼ���ļ�Ϊ�յı�־
		this->m_FileIsEmpty = true;
		// �ر��ļ�
		ifs.close();

		return;
	}

	// �ļ����������ݲ�Ϊ��

	int num = this->get_EmpNum();
	//cout << "ְ���ĸ���Ϊ��" << num << endl;
	this->m_EmpNum = num;
	////����ְ������������
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//��ʼ��ְ��
	init_Emp();
	//���Դ���

	/*for (int i = 0; i < m_EmpNum; i++)
	{
		cout << "ְ���ţ� " << this->m_EmpArray[i]->m_Id
			<< " ְ�������� " << this->m_EmpArray[i]->m_Name
			<< " ���ű�ţ� " << this->m_EmpArray[i]->m_DeptId << endl;
	}*/

};


void WorkerManager::ShowMenu()
{
	cout << "********************************************" << endl;
	cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
	cout << "*************  0.�˳��������  *************" << endl;
	cout << "*************  1.����ְ����Ϣ  *************" << endl;
	cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
	cout << "*************  3.ɾ����ְְ��  *************" << endl;
	cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
	cout << "*************  5.����ְ����Ϣ  *************" << endl;
	cout << "*************  6.���ձ������  *************" << endl;
	cout << "*************  7.��������ĵ�  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
};


// ���Ա���ķ���ʵ��
void WorkerManager::AddEmp()
{
	cout << "���������Ա��������" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		// ���� �¿ռ�Ĵ�С
		int newSize = this->m_EmpNum + addNum;

		//�����¿ռ�
		Worker** newSpace = new Worker * [newSize];   // ����﷨���Ǻ����

		// ��ԭ���ռ��µ����ݣ���ŵ��¿ռ�
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		// ����������
		for (int j = 0; j < addNum; j++)
		{
			int id;
			string name;
			int dSelect;

			cout << "�������" << j + 1 << "����ְ���ı�ţ�" << endl;
			cin >> id;

			cout << "�������" << j + 1 << "����ְ�������֣�" << endl;
			cin >> name;

			cout << "��ѡ���ְ���ĸ�λ: " << endl;
			cout << "1 ��ְͨ��" << endl;
			cout << "2 ����" << endl;
			cout << "3 �ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1://��ͨԱ��
				worker = new Employee(id,name,1);
				break;
			case 2: //����
				worker = new Manager(id,name,2);
				break;
			case 3: //�ϰ�
				worker = new Boss(id,name,3);
				break;
			default:
				break;
			}

			newSpace[this->m_EmpNum + j] = worker;

		}

		//�ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;

		//�����¿ռ�ָ��
		this->m_EmpArray = newSpace;

		//����ְ������
		this->m_EmpNum = newSize;

		//��ʾ��Ϣ
		cout << "�ɹ����" << addNum << "����ְ����" << endl;

		//
		this->m_FileIsEmpty = false;

		//�������ݵ��ļ���
		this->Save();

	}
	else
	{
		cout << "������������������" << endl;
	}

	system("pause");
	system("cls");
}


// ����Ա����Ϣ��д��
void WorkerManager::Save()
{
	//����ͷ�ļ�
	
	//����������
	ofstream ofs;
	// ���ļ�
	ofs.open(FILENAME,ios::out);
			// д����
	for (int i = 0;i<this->m_EmpNum;i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
		// �ر��ļ�
	ofs.close();
}



void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}


// ͳ������
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		num++;
	}
	return num;
}

// ��ʼ��Ա��
void WorkerManager::init_Emp()
{
	// ���ļ�����
	ifstream ifs;
	ifs.open(FILENAME,ios::in);

	int id;
	string name;
	int dId;

	int index = 0;
	
	while (ifs>>id && ifs>>name && ifs>>dId)
	{
		// ����Worker���󣬿�ָ��
		Worker* worker = NULL;
		// �жϲ��ţ������¶���
		if (dId == 1)  // ��ͨԱ�� 
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2) // ����
		{
			worker = new Manager(id, name, dId);
		}
		else if (dId == 3)// �ϰ�
		{
			worker = new Boss(id, name, dId);
		}
		//�������ɺ���Ҫ��ŵ�������
		this->m_EmpArray[index] = worker;

		index++;
	}
}

// ��ʾְ��
void WorkerManager::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			//���ö�̬���ýӿ�
			this->m_EmpArray[i]->ShowInfo();  //ShowInfo �ڹ�Ա�������ϰ��cpp�ļ��С�
		} 
	}

	system("pause");
	system("cls");
}


// ɾ��ְ����
// 4.1 ɾ��ְ��ǰ���жϣ��ó�Ա�Ƿ���ڣ�
int WorkerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	return index;
}


void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
	}
	else
	{
		// ��ְ�����ɾ��
		cout << "��������Ҫɾ����ְ����ţ�" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);

		if (index != -1)
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;

			this->Save();
			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
	}
	system("pause");
	system("cls");
}

// �޸�ְ��
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "�������޸�ְ���ı�ţ�" << endl;
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//���ҵ���ŵ�ְ��

			delete this->m_EmpArray[ret];

			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "�鵽�� " << id << "��ְ������������ְ���ţ� " << endl;
			cin >> newId;

			cout << "�������������� " << endl;
			cin >> newName;

			cout << "�������λ�� " << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newId, newName, dSelect);
				break;
			case 2:
				worker = new Manager(newId, newName, dSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, dSelect);
				break;
			default:
				break;
			}

			//�������� ��������
			this->m_EmpArray[ret] = worker;

			cout << "�޸ĳɹ���" << endl;

			//���浽�ļ���
			this->Save();
		}
		else
		{
			cout << "�޸�ʧ�ܣ����޴���" << endl;
		}
	}

	//������� ����
	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��������ҵķ�ʽ��" << endl;
		cout << "1����ְ����Ų���" << endl;
		cout << "2������������" << endl;

		int select = 0;
		cin >> select;

		if (select == 1)//��ְ���Ų���
		{
			int id;
			cout << "��������ҵ�ְ�����" << endl;
			cin >> id;

			int ret = IsExist(id);
			if (ret != -1)
			{
				cout << "���ҳɹ�����ְ������Ϣ���£�" << endl;
				this->m_EmpArray[ret]->ShowInfo();
			}
			else
			{
				cout << " ����ʧ�ܣ����޴���" << endl;
			}
		}
		else if (select == 2) ////����������
		{
			string name;
			cout << "��������ҵ�������" << endl;
			cin >> name;

			bool flag = false;
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ�,ְ�����Ϊ��"
						<< m_EmpArray[i]->m_Id
						<< " �ŵ���Ϣ���£�" << endl;

					flag = true;

					this->m_EmpArray[i]->ShowInfo();
				}
			}
			if (flag == false)
			{
				// ���޴���
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else
		{
			cout << "����ѡ������" << endl;
		}
	}
	system("pause");
	system("cls");

}

void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "File is not exit or file is empty" << endl;
		system("pause");
		system("cls");

	}
	else
	{
		cout << "��ѡ������ʽ�� " << endl;
		cout << "1����ְ���Ž�������" << endl;
		cout << "2����ְ���Ž��н���" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				if (select == 1)
				{
					if (m_EmpArray[minOrMax]->m_Id > m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else
				{
					if (m_EmpArray[minOrMax]->m_Id < m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
			}
			if (i != minOrMax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] =this-> m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax] = temp;
			}
		}		

	}
	cout << "����ɹ�,�������Ϊ��" << endl;
	this->Save();
	this->Show_Emp();
}


// ��պ���
void WorkerManager::Clean_File()
{
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;

	int select = 0;
	cin >> select;
	
	if (select == 1)
	{
		//��ģʽ ios::trunc �������ɾ���ļ������´���
		ofstream ofs(FILENAME,ios::trunc);
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i] != NULL)
				{
					delete this->m_EmpArray[i];
				}
			}
			this->m_EmpNum = 0;
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
		}
		cout << "��ճɹ���" << endl;
	}
	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager() // ��������������Ŀ�ʵ��
{
	//ͷ�ļ��а����˺���������
	//����ط�Ӧ��д������ʵ��
	// ����WorkerManager�У�����ʲô����д��
	if (this->m_EmpArray != NULL)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i] != NULL)
			{
				delete this->m_EmpArray[i];
			}
		}
		
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}

};