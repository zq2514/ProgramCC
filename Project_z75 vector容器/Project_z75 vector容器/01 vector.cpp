//#include<iostream>
//using namespace std;
//#include<string>
//
//int main()
//{
//	
//	system("pause");
//	return 0;
//}



//#include<iostream>
//using namespace std;
//#include<string>
//#include<vector>
//
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		// (*it) = int
//		cout << *it<<" " ;
//	}
//	cout << endl;
//	cout << endl;
//}
//
////vector �����Ĺ���
//void test01()  // �޲ι���
//{
//	vector<int>v1; 
//
//	// ��������
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	cout << "==============vector ���乹�캯������==============" << endl;
//	vector<int>v2(v1.begin(),v1.end());
//	printVector(v2);
//
//	cout << "==============vector n��elem�ĺ�������==============" << endl;
//	vector<int>v3(10,100);
//	printVector(v3);
//
//	//��������
//	vector<int>v4(v3);
//	printVector(v4);
//	
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




// vector �ĸ�ֵ����
#include<iostream>
using namespace std;
#include<string>
#include<vector>


void printVector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}



void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//��ֵ����  =  or assign
	vector<int>v2 = v1;
	printVector(v2);
	vector<int>v3(v2);
	cout << "v3=" << endl;
	printVector(v3);

	vector<int>v4;
	v4.assign(v3.begin(), v3.end());
	cout << "v4=" << endl;
	printVector(v4);

	vector<int>v5(v3.begin(),v3.end());
	cout << "v5=" << endl;
	printVector(v5);

	// n ��elem��ʽ��ֵ
	vector<int>v6;
	v6.assign(10,100);
	printVector(v6);
}

void test02()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty())
	{
		cout << "v1 not empty" << endl;
	}
	else
	{
		cout << "v1������Ϊ" << v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
	}

	v1.resize(15,100);
	printVector(v1);

	v1.resize(5);
	printVector(v1);

}

void test03()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	// βɾ
	v1.pop_back();
	printVector(v1);

	// ͷ��
	v1.insert(v1.begin(), 2, 100);
	printVector(v1);

	vector<int>v2;
	v1.erase(v1.begin());
	
	v2 = v1;
	printVector(v2);

	cout << "erase ��v2=" << endl;
	v2.erase(v2.begin(), v2.end());
	printVector(v2);

	cout << "clear ��v1= " << endl;
	v1.clear();
	printVector(v1);
}


void test04()// vector ���ݴ�ȡ
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	for (int i = 0; i < v1.size(); i++) // []����
	{
		cout << v1[i]<<" ";
	}
	cout << endl;
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	cout << "v1�ĵ�һ��Ԫ��Ϊ��" << v1.front() << endl;
	cout << "v1�����һ��Ԫ��Ϊ��" << v1.back() << endl;
	//��������ִ����֮��ᱻϵͳ���տռ�
}


void test05() // ��������
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << "����ǰ" << endl;
	printVector(v1);
	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);

	cout << "������" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);

	vector<int> v3;
	for (int i = 0; i < 10000; i++)
	{
		v3.push_back(i);
	}

	cout << "v3 capacity: " << v3.capacity() << endl;
	cout << "v3 size: " << v3.size() << endl;

	v3.resize(3);
	vector<int>(v3).swap(v3);
	cout << "������" << endl;
	cout << "v3 capacity: " << v3.capacity() << endl;
	cout << "v3 size: " << v3.size() << endl;
}

int main()
{
	//test01();
	//test02();  //vector �����������ʹ�С���� 
	//test03();  // vector �����ɾ��
	//test04();  // vector ���ݴ�ȡ
	test05(); 

	system("pause");
	return 0;
}





// 
// 
// 
// 
// 
// 
//=======================================================================================
//#include<iostream>
//using namespace std;
//#include<string>
//
//int main()
//{
//	
//	system("pause");
//	return 0;
//}

