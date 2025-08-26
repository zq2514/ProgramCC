// 用 普通方法 和  多态的方法创建一个计算器
// 
#include<iostream>
using namespace std;
#include<string>;

// 普通方法

// 普通方法创建类，定义权限，定义成员属性，定义成员方法
// 写测试函数。实例化对象；初始化对象属性；调用对象方法。
// main 函数调用测试函数 

class Calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
	}

public:
	int m_Num1;
	int m_Num2;
};



// 多态方法实现计算器
// 1定义抽象类  的计算器
// 2 继承抽象父类 加
// 3 继承抽象父类 减
// 等等
// 写测试函数
// main函数调用测试函数2


//抽象计算器
class abstractCalculator
{
	// 成员函数
public:
	virtual int getResult()  // 要继承，就要写 虚拟成员函数 virtual
	{
		return 0;
	}
public:
	int m_Num1;
	int m_Num2;
};


// 抽象计算器已经写好，下面写 加法 抽象为类：

class AddCalculator:public abstractCalculator
{
public:
	virtual int getResult()  // 要继承，就要写 虚拟成员函数 virtual
	{
		return m_Num1 + m_Num2;
	}
};

// 减法类
class SubCalculator:public abstractCalculator
{
public:
	virtual int getResult()  // 要继承，就要写 虚拟成员函数 virtual
	{
		return m_Num1 - m_Num2;
	}
};

// 乘法类
class MulCalculator:public abstractCalculator
{
public:
	virtual int getResult()  // 要继承，就要写 虚拟成员函数 virtual
	{
		return m_Num1 * m_Num2;
	}
};


void test01()
{
	Calculator c1;
	c1.m_Num1 = 10;
	c1.m_Num2 = 10;

	cout << c1.m_Num1 << "+" << c1.m_Num2 << "=" << c1.getResult("+") << endl;
	cout << c1.m_Num1 << "-" << c1.m_Num2 << "=" << c1.getResult("-") << endl;
	cout << c1.m_Num1 << "*" << c1.m_Num2 << "=" << c1.getResult("*") << endl;
}

void test02()
{
	// 创建加法计算器
	abstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout <<abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc; // new 后 的释放内存操作

	// 创建减法计算器
	abc = new SubCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;

	// 创建乘法计算器
	abc = new MulCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;
}



int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}