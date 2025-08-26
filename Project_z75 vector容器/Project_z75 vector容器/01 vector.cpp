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
////vector 容器的构造
//void test01()  // 无参构造
//{
//	vector<int>v1; 
//
//	// 插入数据
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	cout << "==============vector 区间构造函数测试==============" << endl;
//	vector<int>v2(v1.begin(),v1.end());
//	printVector(v2);
//
//	cout << "==============vector n个elem的函数构造==============" << endl;
//	vector<int>v3(10,100);
//	printVector(v3);
//
//	//拷贝构造
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




// vector 的赋值操作
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

	//赋值操作  =  or assign
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

	// n 个elem方式赋值
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
		cout << "v1的容量为" << v1.capacity() << endl;
		cout << "v1的大小为：" << v1.size() << endl;
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

	// 尾删
	v1.pop_back();
	printVector(v1);

	// 头插
	v1.insert(v1.begin(), 2, 100);
	printVector(v1);

	vector<int>v2;
	v1.erase(v1.begin());
	
	v2 = v1;
	printVector(v2);

	cout << "erase 后v2=" << endl;
	v2.erase(v2.begin(), v2.end());
	printVector(v2);

	cout << "clear 后v1= " << endl;
	v1.clear();
	printVector(v1);
}


void test04()// vector 数据存取
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	for (int i = 0; i < v1.size(); i++) // []访问
	{
		cout << v1[i]<<" ";
	}
	cout << endl;
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	cout << "v1的第一个元素为：" << v1.front() << endl;
	cout << "v1的最后一个元素为：" << v1.back() << endl;
	//匿名对象执行完之后会被系统回收空间
}


void test05() // 容器互换
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << "交换前" << endl;
	printVector(v1);
	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);

	cout << "互换后" << endl;
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
	cout << "互换后" << endl;
	cout << "v3 capacity: " << v3.capacity() << endl;
	cout << "v3 size: " << v3.size() << endl;
}

int main()
{
	//test01();
	//test02();  //vector 容器的容量和大小操作 
	//test03();  // vector 插入和删除
	//test04();  // vector 数据存取
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

