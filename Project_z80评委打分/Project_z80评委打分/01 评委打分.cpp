// 评委打分
// 1 创建一个演员类，存放姓名和分数
//2. 用vector存放演员，用deque存放成绩
//3. 排序，掐头去尾
//4 计算平均分

#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Score = age;
	}

public:
	string m_Name;
	int m_Score;
};


void creatPerson(vector<Person>&v)
{
	string NameSeeds = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string Name = "选手";
		Name += NameSeeds[i];
		int score = 0;
		
		Person p(Name, score);
		v.push_back(p);
	}
	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "名字： " << (*it).m_Name << "\t成绩：" << (*it).m_Score << endl;
	}*/
}

void setScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}
		
		/*cout << "选手：" << it->m_Name << " socre: "  << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit <<" ";
		}
		cout << endl;*/

		//排序
		sort(d.begin(), d.end());
		//去除最高和最低分
		d.pop_front();
		d.pop_back();

		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit!=d.end();dit++)
		{
			sum += *dit;
		}
		int meanScore = sum / d.size();

		//(*it).m_Score = meanScore;
		it->m_Score = meanScore;
	}

	
}

void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "名字： " << (*it).m_Name << "\t成绩：" << (*it).m_Score << endl;
	}
}

int main()
{
	// 随机数种子
	 srand( (unsigned int) time(NULL));

	// 1 创建一个演员类，存放姓名和分数
	vector<Person>v1;
	creatPerson(v1);
	//2. 用vector存放演员，用deque存放成绩
	setScore(v1);
   //4 显示平均分
	showScore(v1);

	system("pause");
	return 0;
}