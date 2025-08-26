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

#define CEHUA 0
#define MEISHU 1
#define YANJIU 2

class Worker
{
public:
	string m_Name;
	int m_Salary;
};

void creatWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];

		worker.m_Salary = rand() % 10001 + 10000;
		v.push_back(worker);
	}
	// ����
	/*for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << it->m_Name << " ���ʣ�" << it->m_Salary << endl;
	}*/
}

void setWorker(vector<Worker>&v,multimap<int,Worker>&m) 
{
	// ��������Ĳ��ű��
	
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int deptId = rand() % 3;  // 0 1 2
		m.insert(make_pair(deptId, *it));
	}

}

void showWorkerByGroup(multimap<int, Worker>&m)
{
	cout << "�߻�����" << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;
	for (multimap<int, Worker>::iterator pos = m.begin(); pos != m.end()&&index<count; pos++,index++)
	{
		cout << "������" << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
	}
}
int main()
{
	// ����Ա��
	vector<Worker>vWorker;
	creatWorker(vWorker);

	// Ա������
	multimap<int, Worker> mWorker;
	setWorker(vWorker,mWorker);

	//��ʾ����
	showWorkerByGroup(mWorker);
	system("pause");
	return 0;
}

