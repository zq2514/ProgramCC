/*
- 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
- 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
- 随机给10名员工分配部门和工资
- 通过multimap进行信息的插入  key(部门编号) value(员工)
- 分部门显示员工信息
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
		worker.m_Name = "员工";
		worker.m_Name += NameSeed[i];

		worker.m_Salary = rand() % 10001 + 10000; //10000~20000

		////将员工放入到容器中
		v.push_back(worker);
	}
	// 测试一下放入成功没有：
	/*for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << it->m_Name << " 工资：" << it->m_Salary << endl;
	}*/
}

void setGroup(vector<Worker>&v, multimap<int, Worker>&m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//产生随机部门编号
		int deptId = rand() % 3; // 0 1 2

		//将员工插入到分组中
		//key部门编号，value具体员工
		m.insert(make_pair(deptId, *it));
	}
}


void showWorkerByGroup(multimap<int, Worker>& m)
{
	cout << "策划部门：" << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count= m.count(CEHUA);
	int index = 0;
	/*for (multimap<int, Worker>::iterator pos = m.begin(); pos != m.end()&&index<count ; pos++,index++)
	{
		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	}*/
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	}
	cout << "----------------------" << endl;
	cout << "美术部门： " << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU); // 统计具体人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名： " << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
	}

	cout << "----------------------" << endl;
	cout << "研发部门： " << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA); // 统计具体人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名： " << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
	}
	
}

int main()
{
	srand((unsigned int)time(NULL));
	// 存入员工的数据
	vector<Worker>vWorker;
	creatWorker(vWorker);

	// 员工分组
	multimap<int, Worker>mWorker;
	setGroup(vWorker,mWorker);

	// 分组显示员工
	showWorkerByGroup(mWorker);

	system("pause");
	return 0;
}