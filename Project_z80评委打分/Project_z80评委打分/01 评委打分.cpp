// ��ί���
// 1 ����һ����Ա�࣬��������ͷ���
//2. ��vector�����Ա����deque��ųɼ�
//3. ������ͷȥβ
//4 ����ƽ����

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
		string Name = "ѡ��";
		Name += NameSeeds[i];
		int score = 0;
		
		Person p(Name, score);
		v.push_back(p);
	}
	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "���֣� " << (*it).m_Name << "\t�ɼ���" << (*it).m_Score << endl;
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
		
		/*cout << "ѡ�֣�" << it->m_Name << " socre: "  << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit <<" ";
		}
		cout << endl;*/

		//����
		sort(d.begin(), d.end());
		//ȥ����ߺ���ͷ�
		d.pop_front();
		d.pop_back();

		//ȡƽ����
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
		cout << "���֣� " << (*it).m_Name << "\t�ɼ���" << (*it).m_Score << endl;
	}
}

int main()
{
	// ���������
	 srand( (unsigned int) time(NULL));

	// 1 ����һ����Ա�࣬��������ͷ���
	vector<Person>v1;
	creatPerson(v1);
	//2. ��vector�����Ա����deque��ųɼ�
	setScore(v1);
   //4 ��ʾƽ����
	showScore(v1);

	system("pause");
	return 0;
}