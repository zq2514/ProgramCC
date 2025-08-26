//#include<iostream>
//using namespace std;
//
//
//
//
//int main()
//{
//	system("pause");
//	return 0;
//}



#include<iostream>
using namespace std;
#include <vector>

void test01()
{
	vector<vector<int>> v;
	/*vector<int>::iterator it = v.begin();*/
	// 创建小容器
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	vector<int> v5;

	// 想小容器中添加数据
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i+1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
		v5.push_back(i + 5);

	}

	// 向大容器中插入小容器
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	v.push_back(v5);


	// 输出容器中的数据；
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		// (*it) = vector<int>  (*it)是个容器，继续迭代
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << *vit << " ";
		}
		cout << endl;
	}

}


int main()
{
	test01();
	system("pause");
	return 0;
}