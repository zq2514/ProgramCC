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

//// P103 成员属性私有化=================================================================
//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person {
//public:
//
//	//姓名设置可读可写
//	void setName(string name) {
//		m_Name = name;
//	}
//	string getName()
//	{
//		return m_Name;
//	}
//
//
//	//获取年龄 
//	int getAge() {
//		return m_Age;
//	}
//	//设置年龄
//	void setAge(int age) {
//		if (age < 0 || age > 150)   //行话叫做 有效性检测
//		{
//			cout << "你个老妖精!" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	//情人设置为只写
//	void setLover(string lover) {
//		m_Lover = lover;
//	}
//
//private:
//	string m_Name; //可读可写  姓名
//
//	int m_Age; //只读  年龄
//
//	string m_Lover; //只写  情人
//};
//
//
//int main() {
//
//	Person p;
//	//姓名设置
//	p.setName("张三");
//	cout << "姓名： " << p.getName() << endl;
//
//	//年龄设置
//	p.setAge(50);
//	cout << "年龄： " << p.getAge() << endl;
//
//	//情人设置
//	p.setLover("苍井");
//	//cout << "情人： " << p.m_Lover << endl;  //只写属性，不可以读取
//
//	system("pause");
//
//	return 0;
//}



//// p104 案例1 立方体类 ================================================================
//#include<iostream>
//using namespace std;
//#include<string>
//
//class cube   // 权限 属性 行为
//{
//public:
//	// 设置立方体的长
//	void setL(int c_L)
//	{
//		m_L = c_L;
//	}
//	// 获取长
//	int getL()
//	{
//		return m_L;
//	}
//	// 设置宽
//	void setW(int c_W)
//	{
//		m_W = c_W;
//	}
//	// 获取宽
//	int getW()
//	{
//		return m_W;
//	}
//	// 设置高
//	void setH(int c_H)
//	{
//		m_H = c_H;
//	}
//	// 获取高
//	int getH()
//	{
//		return m_H;
//	}
//
//	// 计算面积
//	int caculateS()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
//	}
//
//	int caculateV()
//	{
//		return m_L * m_W * m_H;
//	}
//
//	bool isSameByClass(cube &c)
//	{
//		if (m_L== c.getL() && m_W == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//		return false;
//	}
//	// 计算体积
//
//private:
//	int m_L;   // 长
//	int m_W;   // 立方体的宽
//	int m_H;   // 立方体的高，定义属性第一步
//
//};
//
//// 利用全局函数判断 两个立方体是否相等
//bool isSame(cube &c1, cube &c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//
//	cout << "c1的面积 " << c1.caculateS() << endl;
//	cout << "c1的体积为 " << c1.caculateV() << endl;
//
//	cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(11);
//
//	bool ref = isSame(c1, c2);
//	if (ref)
//	{
//		cout << "全局变量中运行结果为：两个立方体相同" << endl;
//	}
//	else
//	{
//		cout << "全局变量中运行结果为：c1和c2是不相等的" << endl;
//	}
//
//	bool ret = c1.isSameByClass(c2);
//	if (ref)
//	{
//		cout << "成员函数运行结果为：两个立方体相同" << endl;
//	}
//	else
//	{
//		cout << "成员函数运行结果为：c1和c2是不相等的" << endl;
//	}
//
//	system("pause");
//	return 0;
//}





















/*

// P105 点和圆的判断 ================================================================================================
#include<iostream>
using namespace std;
#include<string>


// 点类
class Point
{
public:
	// 设置点
	// 设置x
	void setX(int x)
	{
		m_X = x;	
	}
	// 获取x
	int getX()
	{
		return m_X;
	}
	// 设置y
	void setY(int y)
	{
		m_Y = y;
	}
	// 获取y
	int getY()
	{
		return m_Y;
	}

	// 读取点
private :
	int m_X;
	int m_Y;
};
 
 
 
 //圆类
class Circle
{
public:
	// 设置半径
	void setR(int r)
	{
		m_R = r;
	}
	// 获取半径
	int getR()
	{
		return m_R;
	}

	// 设置圆心
	void setCenter(Point center)
	{
		m_Center = center;
	}
	// 获取圆心
	Point getCenter()
	{
		return m_Center;
	}

private :
	int m_R;
	Point m_Center; // 圆心   类中套类
};

//判断点和圆的关系
void isInCircle(Circle& c, Point& p)
{
	//计算两点之间的距离
	int distance  = 
	(c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	//计算半径的平方
	int rdistance = c.getR() * c.getR();
	// 判断点相对于圆的关系
	if (distance < rdistance)
	{
		cout << "点在园内" << endl;
	}
	else if(distance == rdistance)
	{
		cout << "点在圆上" << endl;
	}
	else
	{
		cout << "点在圆外" << endl;
	}
}


int main()
{
	//创建点，距离点，圆心点
	Point p1;
	p1.setX(0);
	p1.setY(10);

	Point p2;
	p2.setX(10);
	p2.setY(10);

	// 创建圆
	Circle c1;
	c1.setR(10);
	c1.setCenter(p2);

	isInCircle(c1, p1);

	
	system("pause");
	return 0;
}

*/


























//// P105 点和圆的判断  类文件分开写=====[运行这个文件需要在源文件中添加circle.cpp and Point.cpp]===========================================================================================
//#include<iostream>
//using namespace std;
//#include<string>
//#include "Point.h"   // 写好头文件后可以这样用
//#include "circle.h"
//
////判断点和圆的关系
//void isInCircle(Circle& c, Point& p)
//{
//	//计算两点之间的距离
//	int distance  = 
//	(c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//
//	//计算半径的平方
//	int rdistance = c.getR() * c.getR();
//	// 判断点相对于圆的关系
//	if (distance < rdistance)
//	{
//		cout << "点在园内" << endl;
//	}
//	else if(distance == rdistance)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else
//	{
//		cout << "点在圆外" << endl;
//	}
//}
//
//int main()
//{
//	//创建点，距离点，圆心点
//	Point p1;
//	p1.setX(0);
//	p1.setY(10);
//
//	Point p2;
//	p2.setX(10);
//	p2.setY(10);
//
//	// 创建圆
//	Circle c1;
//	c1.setR(10);
//	c1.setCenter(p2);
//
//	isInCircle(c1, p1);
//
//	
//	system("pause");
//	return 0;
//}



























// P106 构造函数和析构函数===========================================================================



//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person
//{
//public:
//	//构造函数
//	//1. 构造函数，没有返回值也不写void
//	/*2. 函数名称与类名相同
//	  3. 构造函数可以有参数，因此可以发生重载
//	  4. 程序在调用对象时候会自动调用构造，无须手动调用, 而且只会调用一次*/
//	
//	Person()
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//	//析构函数
//		/*1. 析构函数，没有返回值也不写void
//		2. 函数名称与类名相同, 在名称前加上符号  ~
//		3. 析构函数不可以有参数，因此不可以发生重载
//		4. 程序在对象销毁前会自动调用析构，无须手动调用, 而且只会调用一次*/
//
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//};
//
//void test01()
//{
//	Person p;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}




















//// P107-01 函数的分类和调用
//
//
//#include<iostream>
//using namespace std;
//#include<string>
//
//
////1、构造函数分类
//// 按照参数分类分为 有参和无参构造   无参又称为默认构造函数
//// 按照类型分类分为 普通构造和拷贝构造
//class Person
//{
//public:
//	Person()
//	{
//		cout << "无参构造函数" << endl;  //构造函数就是和类名一样的函数为构造函数
//	}
//	Person(int a)      //有参构造函数 (写法又是函数重载，函数重载的条件就是，参数类型，个数，排序) 
//	{
//		age = a;
//		cout << "有参构造函数" << endl;
//	}
//	
//	//拷贝构造函数
//	Person(const Person &p)   //后边带的是引用，直接带参数会报错
//	{
//		age = p.age;
//		cout << "拷贝构造函数!" << endl;
//	}
//
//	//析构函数
//	~Person() 
//	{
//		cout << "析构函数!" << endl;
//	}
//
//public:
//	int age;
//};
//
////测试函数
//void test01()
//{
//	Person p; //调用无参构造函数
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




















//// P107-02 函数的分类和调用===================================================================
//
//#include<iostream>
//using namespace std;
//#include<string>
//
//
////1、构造函数分类
//// 按照参数分类分为 有参和无参构造   无参又称为默认构造函数
//// 按照类型分类分为 普通构造和拷贝构造
//class Person
//{
//public:
//	Person()
//	{
//		cout << "无参构造函数" << endl;  //构造函数就是和类名一样的函数为构造函数
//	}
//	Person(int a)      //有参构造函数 (写法又是函数重载，函数重载的条件就是，参数类型，个数，排序) 
//	{
//		age = a;
//		cout << "有参构造函数" << endl;
//	}
//
//	//拷贝构造函数
//	Person(const Person& p)   //后边带的是引用，直接带参数会报错
//	{
//		age = p.age;
//		cout << "拷贝构造函数!" << endl;
//	}
//
//	//析构函数
//	~Person()
//	{
//		cout << "析构函数!" << endl;
//	}
//
//public:
//	int age;
//};
//
////测试函数  //调用无参构造函数
//void test01()
//{
//	Person p; //调用无参构造函数
//}
//
//
//// 测试函数2  //调用有参的构造函数
//void test02()
//{
//	//2.1  括号法，常用
//	//2.2 显式法
//	//2.3 隐式转换法
//
//	//2.1  括号法，常用
//	Person p1(10);
//	//注意1：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明,如下所示：
//	//Person p2();
//
//
//	//2.2 显式法
//	Person p2 = Person(10);    //有参构造函数调用
//	Person p3 = Person(p3);    // 拷贝构造函数调用
//	//2.3 隐式转换法
//	Person p4 = 10;   // Person p4 = Person(10);  就是上面程序语句的简写
//	Person p5 = p4;   // Person p5 = Person(p4); 
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}




















//C++中拷贝构造函数调用时机通常有三种情况
//
//* 使用一个已经创建完毕的对象来初始化一个新对象
//* 值传递的方式给函数参数传值
//* 以值方式返回局部对象



//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person {
//public:
//	Person() {
//		cout << "无参构造函数!" << endl;
//		mAge = 0;
//	}
//	Person(int age) {
//		cout << "有参构造函数!" << endl;
//		mAge = age;
//	}
//	Person(const Person& p) {
//		cout << "拷贝构造函数!" << endl;
//		mAge = p.mAge;
//	}
//	//析构函数在释放内存之前调用
//	~Person() {
//		cout << "析构函数!" << endl;
//	}
//public:
//	int mAge;
//};
////* 使用一个已经创建完毕的对象来初始化一个新对象
//void test01() {
//
//	Person man(100); //p对象已经创建完毕
//	Person newman(man); //调用拷贝构造函数
//	Person newman2 = man; //拷贝构造
//
//	//Person newman3;
//	//newman3 = man; //不是调用拷贝构造函数，赋值操作
//}
////2. 值传递的方式给函数参数传值
////相当于Person p1 = p;
//void doWork(Person p1) 
//{
//	
//}
//
//
//void test02()
//{
//	Person p; //无参构造函数
//	doWork(p);    // 执行该程序的时候会进行拷贝
//}
//
////3. 以值方式返回局部对象
//Person doWork2()
//{
//	Person p1;
//	cout << "地址为" << (int*)&p1 << endl;  //改行会打印地址
//	return p1;
//}
//
//void test03()
//{
//	Person p = doWork2();
//	cout << "地址为" << (int*)&p << endl;
//}
//
//
//int main() {
//
//	//test01();
//	//test02();
//	test03();
//
//	system("pause");
//
//	return 0;
//}


























// P109 构造函数的调用规则========================================================================



//#### 4.2.4 构造函数调用规则
//
//默认情况下，c++编译器至少给一个类添加3个函数
//
//1．默认构造函数(无参，函数体为空)
//
//2．默认析构函数(无参，函数体为空)
//
//3．默认拷贝构造函数，对属性进行值拷贝
//
//
//
//构造函数调用规则如下：
//
//* 如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
//
//
//* 如果用户定义拷贝构造函数，c++不会再提供其他构造函数


//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person {
//public:
//	//无参（默认）构造函数
//	Person() {
//		cout << "无参构造函数!" << endl;
//	}
//	//有参构造函数
//	Person(int a) {
//		age = a;
//		cout << "有参构造函数!" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person& p) {
//		age = p.age;
//		cout << "拷贝构造函数!" << endl;
//	}
//	//析构函数
//	~Person() {
//		cout << "析构函数!" << endl;
//	}
//public:
//	int age;
//};
//
//void test01()
//{
//	Person p1(18);
//	//如果不写拷贝构造，编译器会自动添加拷贝构造，并且做浅拷贝操作
//	Person p2(p1);
//
//	cout << "p2的年龄为： " << p2.age << endl;
//}
//
//void test02()
//{
//	//如果用户提供有参构造，编译器不会提供默认构造，会提供拷贝构造
//	Person p1; //此时如果用户自己没有提供默认构造，会出错
//	Person p2(10); //用户提供的有参
//	Person p3(p2); //此时如果用户没有提供拷贝构造，编译器会提供
//
//	//如果用户提供拷贝构造，编译器不会提供其他构造函数
//	Person p4; //此时如果用户自己没有提供默认构造，会出错
//	Person p5(10); //此时如果用户自己没有提供有参，会出错
//	Person p6(p5); //用户自己提供拷贝构造
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}






















// P110.1 深拷贝与浅拷贝============================================================================


//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认无参构造函数" << endl;
//	}
//	Person(int age)
//	{
//		m_age = age;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//	int m_age;
//};
//void test01()
//{
//	Person p1(18);
//	cout << "Person的年龄为： " << p1.m_age << endl;
//	Person p2(p1);
//	cout << "p2的年龄为：" << p2.m_age << endl;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

// 上述浅拷贝没有任何问题，下面进行改进，
// 
// 
// 
// P110.2 深拷贝与浅拷贝============================================================================

//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认无参构造函数" << endl;
//	}
//	Person(int age,int height)
//	{
//		m_age = age;
//		m_Height =  new int(height);  //此处没有直接进行赋值操作，而是进行了new操作，在堆区开辟了新内存。堆区的数据类型指针，返回类型也是指针。 
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//	int m_age;
//	int* m_Height;   // 创建了指针，用于接收new，堆区的数据，堆区的数据只能用指针数据接收
//};
//void test01()
//{
//	Person p1(18,160);
//	cout << "Person的年龄为： " << p1.m_age << "  p1的身高为："<<*p1.m_Height<<endl;
//	Person p2(p1);
//	cout << "p2的年龄为：" << p2.m_age << "  p2的身高为：" << *p2.m_Height << endl;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//  程序P110.2（上面这段程序）可以运行，但实质不对。
//  程序中new，在堆区开辟了内存，该内存由程序员亲自开辟，运行结束后也应该由程序员亲自释放
// 显然上面的程序没有进行释放处理，下面P110.3 补充释放操作


// P110.3 深拷贝与浅拷贝==============补充堆区内存释放操作==============================================================

//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认无参构造函数" << endl;
//	}
//	Person(int age, int height)
//	{
//		m_age = age;
//		m_Height = new int(height);  //此处没有直接进行赋值操作，而是进行了new操作，在堆区开辟了新内存。堆区的数据类型指针，返回类型也是指针。 
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	Person(const Person& p)
//	{		
//		cout << " 拷贝构造函数的调用" << endl;
//		m_age = p.m_age;
//		//m_Height = p.m_Height;    // 这个与编译器自己的写的语句相同。下面写深拷贝语句
//		// 深拷贝操作
//		m_Height = new int(*p.m_Height);
//	}
//
//	~Person() // 析构函数的作用，将程序员在堆区开辟的内存空间运行后释放
//	{
//		cout << "Person的析构函数调用" << endl;
//		if (m_Height != NULL)
//		{
//			delete m_Height;   // 清除内存
//			m_Height = NULL;   // 将指针置空，防止野指针出现
//			// 释放操作，delete and 置空
//		}
//	}
//	int m_age;
//	int* m_Height;   // 创建了指针，用于接收new，堆区的数据，堆区的数据只能用指针数据接收
//};
//void test01()
//{
//	Person p1(18, 160);
//	cout << "Person的年龄为： " << p1.m_age << "  p1的身高为：" << *p1.m_Height << endl;
//	Person p2(p1);
//	cout << "p2的年龄为：" << p2.m_age << "  p2的身高为：" << *p2.m_Height << endl;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

// 总结：
// 析构函数的作用就是清除内存。在堆上清除的顺序是先入后出。
// 如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题






















//P111 初始化列表===========================================================================

//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person {
//public:
//
//	////传统方式初始化
//	//Person(int a, int b, int c) {
//	//	m_A = a;
//	//	m_B = b;
//	//	m_C = c;
//	//}
//
//	//初始化列表方式初始化
//	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {}
//	void PrintPerson() {
//		cout << "mA:" << m_A << endl;
//		cout << "mB:" << m_B << endl;
//		cout << "mC:" << m_C << endl;
//	}
//private:
//	int m_A;
//	int m_B;
//	int m_C;
//};
//
//int main() {
//
//	Person p(1, 2, 3);
//	p.PrintPerson();
//
//
//	system("pause");
//
//	return 0;
//}
























//P112 类对象作为类成员===========================================================================
//#include<iostream>
//using namespace std;
//#include<string>
//
//class Phone
//{
//public:
//	Phone(string name)
//	{
//		m_PhoneName = name;
//		cout << "Phone构造" << endl;
//	}
//
//	~Phone()
//	{
//		cout << "Phone析构" << endl;
//	}
//
//	string m_PhoneName;
//
//};
//
//
//class Person
//{
//public:
//
//	//初始化列表可以告诉编译器调用哪一个构造函数
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person构造" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person析构" << endl;
//	}
//
//	void playGame()
//	{
//		cout << m_Name << " 使用" << m_Phone.m_PhoneName << " 牌手机! " << endl;
//	}
//
//	string m_Name;
//	Phone m_Phone;
//
//};
//void test01()
//{
//	//当类中成员是其他类对象时，我们称该成员为 对象成员
//	//构造的顺序是 ：先调用对象成员的构造，再调用本类构造
//	//析构顺序与构造相反
//	Person p("张三", "苹果X");
//	p.playGame();
//
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}






















//P113   4.2.8 静态成员=================**示例1 ：**静态成员变量==============================================

	//静态成员变量特点：
	//1 在编译阶段分配内存
	//2 类内声明，类外初始化
	//3 所有对象共享同一份数据

//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person
//{
//public:
//
//	//1 在编译阶段分配内存
//	//3 所有对象共享同一份数据
//	//2 类内声明，类外初始化
//	
//	static int m_A;
//
//private:
//
//	static int m_B;  // 私有权限下的静态成员变量，类内可以访问，类外不可以访问
//
//};
//
//int Person::m_A = 10;   //2 类内声明，类外初始化，没有这行，程序不能运行
//int Person::m_B = 300;
//
//void test01()
//{
//	Person p1;
//	p1.m_A = 100;
//	cout <<"p1的值为："<<  p1.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << "p2的值为：" << p2.m_A << endl;  // 表明所有对象共享同一份数据
//
//}
//
//
//void test02()
//{
//	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
//	//静态成员变量两种访问方式
//
//
//	//1、通过对象
//	Person p3;
//	cout << "test02调用，p3的值为：" << p3.m_A << endl;  // 表明所有对象共享同一份数据
//	//200
//
//
//	//2、通过类名
//	cout << "test02 通过类名进行访问静态成员变量：" << Person::m_A << endl;
//	//cout << Person::m_B << endl;  // 出错，访问不到。类外访问不到私有静态成员变量
//}
//
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}























//P113   4.2.8 静态成员=================**示例1 ：**静态成员函数==============================================



//#include<iostream>
//using namespace std;
//#include<string>
//
////静态成员函数特点：
//	//1 程序共享一个函数
//	//2 静态成员函数只能访问静态成员变量
//
//
//class Person
//{
//
//public:
//
//	//静态成员函数特点：
//	//1 程序共享一个函数
//	//2 静态成员函数只能访问静态成员变量
//
//	static void func()
//	{
//		cout << "func调用" << endl;
//		m_A = 100;
//		//m_B = 100; //错误，不可以访问非静态成员变量
//	}
//
//	static int m_A; //静态成员变量
//	int m_B; // 
//private:
//
//	//静态成员函数也是有访问权限的
//	static void func2()
//	{
//		cout << "func2调用" << endl;
//	}
//};
//int Person::m_A = 10;
//
//
//void test01()
//{
//	//静态成员函数两种访问方式
//
//	//1、通过对象
//	Person p1;
//	p1.func();
//
//	//2、通过类名
//	Person::func();
//
//
//	//Person::func2(); //私有权限访问不到
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}


























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
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}