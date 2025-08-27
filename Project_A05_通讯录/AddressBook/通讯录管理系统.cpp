#include<iostream>
#include<string>
using namespace std;
#define MAX 1000 // �곣���� ȫ�ֱ���



void showMenu()
{
	cout << "==========1�������ϵ��==========" << endl;
	cout << "==========2����ʾ��ϵ��==========" << endl;
	cout << "==========3��ɾ����ϵ��==========" << endl;
	cout << "==========4��������ϵ��==========" << endl;
	cout << "==========5���޸���ϵ��==========" << endl;
	cout << "==========6�������ϵ��==========" << endl;
	cout << "==========0���Ƴ�ͨѶ¼==========" << endl;

}


// �����ϵ�˵Ľṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա� 1�� 2Ů
	int m_Sex;
	//����
	int m_Age;
	//�绰
	string m_Phone;

	//סַ
	string m_Addr;
};

// ���ͨѶ¼�Ľṹ��

struct AddressBooks
{
	// ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];

	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};


// �����ϵ��
// ��ָ����������ַ
void addPerson(AddressBooks * abs)
{
	// ����˼�������ӣ�
	// ���һ����Ϣʱ����Ҫ������Щ��Ϣ�أ�
	// ���ȿ���ͨѶ¼�Ƿ����������ͨѶ¼���Ƿ��Ѿ����ڣ�����������㣬��Ӹ���Ϣ��
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		// ����öΣ�˵��������ӣ�
		// ��ӹ�������
		
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//�Ա� 1�� 2Ů
		cout << "�������Ա𣺣�1�� 2Ů��" << endl;
		int sex =0;


		// ���ǵ��û��������������ṹ��֤�û�������ȷ���˳�
		while (true)
		{
			//
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}

		

		//����
		cout << "���������䣺" << endl;
		int age=0;
		

		while (true)
		{
			cin >> age;
			if (age > 0 && age <= 120)
			{
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			cout << "������������������" << endl;
		}

		

		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//סַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;


		// ���ע�⣬�����һ����֮����Ҫ����ͨѶ¼������
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;

		// ��ӳɹ�����Ҫ�����ϲ���棬��ʱ��Ҫ�����Ļ��
			//�밴���������
			system("pause");
			//����
			system("cls");
		 
	}
}




int main()
{
	// ����ͨѶ¼�ṹ�����
	AddressBooks abs;

	// ��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	//����һ�����������û�ѡ��ִ��ĳ������
	int select = 0;

	while (true)
	{
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1: // 1�������ϵ��
			//���û�ѡ����1ʱ����Ҫ��ͨѶ¼�������ϵ�ˣ������Ӻ���
			// ��������Ҫ����һ��ֵ����ֵ��Ҫ�仯������ֻ���ǵ�ַ��ʹ�õ�ַ���ݣ�
			// ���õ�ַ���ݿ����޸ģ����Σ�ʵ�Σ�
			addPerson(&abs);
			break;
		case 2: // 2����ʾ��ϵ��
			break;
		case 3: // 3��ɾ����ϵ��
			break;
		case 4: // 4��������ϵ��
			break;
		case 5: // 5���޸���ϵ��
			break;
		case 6: // 6�������ϵ��
			break;
		case 0: // 0���Ƴ�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:

			break;
		}
	}


	system("pause");
	return 0;
}