#include <iostream>
using namespace std;
#include <string>

class AbstractDrinking
{
public:
	//烧水
	virtual void Boil() = 0;
	// 煮泡
	virtual void Brew() = 0;
	// 倒入杯中
	virtual void PourInCup() = 0;
	// 添加补品
	virtual void AddSomething() = 0;

	// 规定流程
	void MakeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		AddSomething();
	}
};

// 上面抽象父类已经写好，下面进行继承

class Tea :public AbstractDrinking
{
public:
	//进行重写
	virtual void Boil()
	{
		cout << "烧茶水" << endl;
	}
	virtual void Brew()
	{
		cout << "煮茶" << endl;
	}
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void AddSomething()
	{
		cout << "添加枸杞" << endl;
	}

};


// 制作咖啡
class Coffee :public AbstractDrinking
{
public:
	//进行重写
	virtual void Boil()
	{
		cout << "烧咖啡水" << endl;
	}
	virtual void Brew()
	{
		cout << "煮咖啡" << endl;
	}
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void AddSomething()
	{
		cout << "添加牛奶和糖" << endl;
	}

};

// 制作橙汁
class Juice :public AbstractDrinking
{
public:
	//进行重写
	virtual void Boil()
	{
		cout << "烧juice水" << endl;
	}
	virtual void Brew()
	{
		cout << "煮juice" << endl;
	}
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void AddSomething()
	{
		cout << "添加orage" << endl;
	}

};


void DoWork(AbstractDrinking * drink)//   AbstractDrinking * drink = new Tea  父类指针指向子类对象
{
	drink->MakeDrink();
	delete drink; // 释放堆区内存，防止内存泄露
}

void test01()
{
	// 调用测试对象，比如冲咖啡
	DoWork(new Tea);  // 函数中传入Tea对象
	cout << "=========================" << endl;
	DoWork(new Coffee);
	cout << "=========================" << endl; 
	DoWork(new Juice);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
