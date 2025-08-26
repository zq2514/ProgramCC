#include<iostream>
using namespace std;
#include<string>
#define MAX 1000

//step1 �˵�������ʾ
//step2 �˳�����ʵ��
//step3 ��, ��ϵ�˽ṹ�壬ͨѶ¼�ṹ��
//step4 ��
//setp4 ɾ
//step5 ��
//step6 ��
//step7 ��

//�˵�����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}


//��ϵ�˽ṹ��
struct Person
{
	string m_Name; //����
	int m_Sex; //�Ա�1�� 2Ů
	int m_Age; //����
	string m_Phone; //�绰
	string m_Addr; //סַ
};

//ͨѶ¼�ṹ��
struct Addressbooks
{
	struct Person personArray[MAX]; //ͨѶ¼�б������ϵ������
	int m_Size; //ͨѶ¼����Ա����
};


//1.ͨѶ¼��ӡ�
void addPerson(Addressbooks * abs)
{
	//���֮ǰ�Ƚ����ж�
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		//�����ϵ��
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;
			
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������";
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼
		abs->m_Size++;
		
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");

	}
}


// 2.ͨѶ¼��ʾ
void showPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");
}

//�ж��Ƿ���ڲ�ѯ����Ա�����ڷ���������������λ�ã������ڷ���-1
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

//3��ɾ��ָ����ϵ����Ϣ
void deletePerson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)//�ҵ���ϵ��
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}

//4������ָ����ϵ����Ϣ
void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);  //�����ж��Ƿ���ڵĺ�����
	if (ret != -1)// ���������-1.˵��ͨѶ¼���н��
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << abs->personArray[ret].m_Sex << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");     //�����������
	system("cls");		//����Ļ����

}

//5���޸�ָ����ϵ����Ϣ
void modifyPerson(Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);  // �ж��Ƿ����
	if (ret != -1)   // ����-1�����ڣ�������-1����
	{
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;

		//�Ա�
		int sex = 0;
		while (true)     // д���ѭ����Ŀ����Ϊ�� ��ֹ�������벻�Ծ�һֱѭ��������Ҳ��������
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "������������������";
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");

}

//6�����������ϵ��
void cleanPerson(Addressbooks* abs)
{
	cout << "ȷ�����ͨѶ¼���˲��������Գ��أ�Y/N" << endl;
	string YN;
	cin >> YN;
	while (true)
	{
		if (YN == "Y")
		{
			abs->m_Size = 0;
			cout << "ͨѶ¼�����" << endl;
			break;
		}
		else
		{
			cout << "��ճ�������ֹ" << endl;
			break;
		}
		cout << "������������������" << endl;
	}	
	system("pause");
	system("cls");
}

int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	abs.m_Size = 0;

	//step1 �˵�������ʾ
	int slect = 0;
	

	while (true)
	{
		showMenu();
		while (true)
		{
			cout << "������ѡ��" << endl;
			cin >> slect;
			if (slect==0||slect ==1 || slect == 2 || slect == 3 || slect == 4 || slect == 5 || slect == 6)
			{
				break;
			}
			cout << "������������������" << endl;
		}
		

		switch (slect)
		{
		case 1: //1�������ϵ��
			addPerson(&abs);
			break;
		case 2:  //2����ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:  //3��ɾ����ϵ��
		//{
		//	cout << "������Ҫ���ҵ���ϵ�˵������� " << endl;
		//	string name;
		//	cin >> name;

		//	if (isExist(&abs, name) == -1)
		//	{
		//		cout << "���޴���" << endl;
		//	}
		//	else
		//	{
		//		cout << "�ҵ�����" << endl;
		//	}
		//}
			deletePerson(&abs);
			break;
		case 4:   //4��������ϵ��
			findPerson(&abs);
			break;
		case 5:   //5���޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:  //6�������ϵ��
			cleanPerson(&abs);
			break;
		case 0:  // 0���˳�ͨѶ¼
			system("pause");
			return 0;
			break;
		default:
			break;
		};
	}
	
	system("pause");
	return 0;
}