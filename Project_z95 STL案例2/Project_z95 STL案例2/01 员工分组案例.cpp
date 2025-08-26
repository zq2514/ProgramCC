/*
- ��˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
- Ա����Ϣ��: ����  ������ɣ����ŷ�Ϊ���߻����������з�
- �����10��Ա�����䲿�ź͹���
- ͨ��multimap������Ϣ�Ĳ���  key(���ű��) value(Ա��)
- �ֲ�����ʾԱ����Ϣ
*/

#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<map>
#include<ctime>

#define CEHUA 0
#define MEISHU 1 
#define YANFA 2

class Worker
{
	//Worker(string name, int salary)
	//{
	//	this->m_Name = name;
	//	this->m_Salary = salary;
	//}
public:
	string m_Name;
	int m_Salary;
};

void creatWorker(vector<Worker>&v)
{
	string NameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += NameSeed[i];

		worker.m_Salary = rand() % 10001 + 10000; //10000~20000

		////��Ա�����뵽������
		v.push_back(worker);
	}
	// ����һ�·���ɹ�û�У�
	/*for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << it->m_Name << " ���ʣ�" << it->m_Salary << endl;
	}*/
}

void setGroup(vector<Worker>&v, multimap<int, Worker>&m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��
		int deptId = rand() % 3; // 0 1 2

		//��Ա�����뵽������
		//key���ű�ţ�value����Ա��
		m.insert(make_pair(deptId, *it));
	}
}


void showWorkerByGroup(multimap<int, Worker>& m)
{
	cout << "�߻����ţ�" << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count= m.count(CEHUA);
	int index = 0;
	/*for (multimap<int, Worker>::iterator pos = m.begin(); pos != m.end()&&index<count ; pos++,index++)
	{
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}*/
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}
	cout << "----------------------" << endl;
	cout << "�������ţ� " << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU); // ͳ�ƾ�������
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������ " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
	}

	cout << "----------------------" << endl;
	cout << "�з����ţ� " << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA); // ͳ�ƾ�������
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������ " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
	}
	
}

int main()
{
	srand((unsigned int)time(NULL));
	// ����Ա��������
	vector<Worker>vWorker;
	creatWorker(vWorker);

	// Ա������
	multimap<int, Worker>mWorker;
	setGroup(vWorker,mWorker);

	// ������ʾԱ��
	showWorkerByGroup(mWorker);

	system("pause");
	return 0;
}