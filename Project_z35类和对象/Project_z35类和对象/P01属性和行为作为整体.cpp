#include<iostream>
using namespace std;
//类和对象
// step1 创建类           创建类的时候，类包括他的权限，属性和行为，需要创建在一起。
// step2 实例化对象       实例化一般写在main函数中。
const double PI = 3.14;

class Circle  
{
	//权限
public:
	//属性
	double m_r;
	//行为
	//行为一般是一个函数，这里的行为是计算圆的周长
	double Caculate()
	{
		return 2 * PI * m_r;   //这里涉及到常量PI，在最前面定义即可。
	};
};


int main()
{
	// 实例化对象
	Circle c1;         // 实例化对象
	c1.m_r = 10.0;     // 定义属性
	double ZC = c1.Caculate();   // 调用行为
	cout << "圆的周长为：" << ZC << endl;
	system("pause");
	return 0;
}