


//#### 4.3.1 成员变量和成员函数分开存储=========================================================
//
//
//
//在C++中，类内的成员变量和成员函数分开存储
//只有非静态成员变量才属于类的对象上
//静态成员变量 不属于类的对象上
//非静态成员函数，不属于类的对象上
//静态成员函数，不属于类的对象上

//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person
//{
//	
//};
//void test01()
//{
//	Person p1;
//	cout << "size of the p1:   " <<sizeof(p1)<< endl;   // 当类中不含有任何性信息的时候，空对象的占用的内存空间为1字节
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}

























//this指针概念================================================================================
//
//this指针的用途：
//1.解决名称冲突
//2 返回对象本身用*this

//#include<iostream>
//using namespace std;
//#include<string>
//class Person
//{
//public:
//	Person(int age)
//	{
//		//age = age;     //error 
//		this->age = age;   //如果没有这个this，  age就会重复，而不知道如和处置；
//		
//	}
//	void PersonAddAge(Person &p)
//	{
//		this->age += p.age;
//	}
//
//	Person& PersonAddAge02(Person& p)  //这个位置不加  &   的话，结果就会出错，原因是
//		// 不加& ，就是以值的方式方式返回，这会创建一个新的对象，而不是将值返回给目标调用目标p
//		// 加& ，就是以指针的方式返回，用的一直就是调用对象 的地址。不走位。
//	{
//		this->age += p.age;
//		return *this;
//	}
//
//	int age;
//};
//
//void test01()  // 测试名称
//{
//	Person p1(10);
//	cout << "p1的年龄为：" << p1.age << endl;
//}
//
//
//void test02()//2 返回对象本身用*this
//{
//	Person p2(10);
//	Person p3(10);	
//	p3.PersonAddAge(p2);  // 该行想要实现把p2 的年龄 加到p3上面
//
//	cout << "p3's age is:  " << p3.age << endl;    // result： 20
//}
//
//void test03()//2 返回对象本身用*this  连续加操作实现
//{
//	Person p4(10);
//	Person p5(10);
//	p5.PersonAddAge02(p4).PersonAddAge02(p4).PersonAddAge02(p4);  // 该行想要实现把p2 的年龄 加到p3上面
//
//	cout << "p5's age is:  " << p5.age << endl;    // result： 20
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	test03();
//
//	system("pause");
//
//	return 0;
//}





















//P116 空指针访问成员函数===========================================================================

#include<iostream>
using namespace std;
#include<string>

int main() 
{


	system("pause");

	return 0;
}
















































//P116 

//#include<iostream>
//using namespace std;
//#include<string>
//
//int main() 
//{
//
//
//	system("pause");
//
//	return 0;
//}