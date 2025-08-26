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
		worker.m_Name = "员工";
		worker.m_Name += nameSeed[i];

		worker.m_Salary = rand() % 10001 + 10000;
		v.push_back(worker);
	}
	// 测试
	/*for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << it->m_Name << " 工资：" << it->m_Salary << endl;
	}*/
}

void setWorker(vector<Worker>&v,multimap<int,Worker>&m) 
{
	// 产生随机的部门编号
	
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int deptId = rand() % 3;  // 0 1 2
		m.insert(make_pair(deptId, *it));
	}

}

void showWorkerByGroup(multimap<int, Worker>&m)
{
	cout << "策划部门" << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;
	for (multimap<int, Worker>::iterator pos = m.begin(); pos != m.end()&&index<count; pos++,index++)
	{
		cout << "姓名：" << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
	}
}
int main()
{
	// 创建员工
	vector<Worker>vWorker;
	creatWorker(vWorker);

	// 员工分组
	multimap<int, Worker> mWorker;
	setWorker(vWorker,mWorker);

	//显示分组
	showWorkerByGroup(mWorker);
	system("pause");
	return 0;
}

