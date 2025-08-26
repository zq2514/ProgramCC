#include <iostream>
using namespace std;
#include<set>

//* set������������ʱ��insert
//* set�����������ݵ����ݻ��Զ�����

void printSet(set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}

void test01()
{
	set<int>s1;   //����͸�ֵ ,Ĭ�Ϲ���
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(50);
	s1.insert(30);
	s1.insert(40);
	printSet(s1);

	//��������
	set<int>s2(s1);
	cout << "s2= " << endl;
	printSet(s2);

	//��ֵ
	set<int>s3;
	s3 = s2;
	cout << "s3= " << endl;
	printSet(s3);
}

void test02()
{
	set<int>s1;   //����͸�ֵ ,Ĭ�Ϲ���
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(50);
	s1.insert(30);
	s1.insert(40);
	
	if (s1.empty())
	{
		cout << "s1Ϊ��" << endl;

	}
	else
	{
		cout << "s1��Ϊ��" << endl;
		cout << "s1 �Ĵ�СΪ" << s1.size() << endl;
	}

	set<int>s2;   //����͸�ֵ ,Ĭ�Ϲ���
	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(500);
	s2.insert(400);
	cout << "����ǰ" << endl;
	printSet(s1);
	printSet(s2);

	cout << "������" << endl;
	s2.swap(s1);
	printSet(s1);
	printSet(s2);

}

void test03()
{
	set<int>s;
	pair<set<int>::iterator, bool> ret = s.insert(10);
	if (ret.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else {
		cout << "��һ�β���ʧ��!" << endl;
	}

	ret = s.insert(10);
	if (ret.second) 
	{
		cout << "�ڶ��β���ɹ�!" << endl;
	}
	else
	{
		cout << "�ڶ��β���ʧ��!" << endl;
	}

	multiset<int> ms2;
	ms2.insert(10);
	ms2.insert(10);
	
	for (multiset<int>::iterator it = ms2.begin(); it != ms2.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}
void test04()
{
	pair<string, int>p1 = make_pair("zhang",26);
	cout << p1.first << " " << p1.second << endl;
}





int main()
{
	//test01();//����͸�ֵ
	//test02();// set�Ĵ�С �ͽ���
	//test03(); // set��multiset
	test04(); // pait �����ʹ��
	
	
	system("pause");
	return 0;
}


//#include <iostream>
//using namespace std;
//
//
//
//int main()
//{
//	system("pause");
//	return 0;
//}