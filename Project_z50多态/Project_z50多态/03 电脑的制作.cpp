#include <iostream>
using namespace std;

// 抽象类，cpu(计算)， 显卡（显示），内存（存储）
class CPU
{
public:
	virtual void Calculate() = 0;
};

class VideoCard
{
public:
	virtual void VideoShow() = 0;
};

class Memory
{
public:
	virtual void Storage() = 0;
};


// 抽象完零件，将它们组装成电脑类
// 电脑类
// 先写属性，才写行为，属性包括cpu，显卡和内存
class Computer
{
public:
	Computer(CPU * cpu, VideoCard * vc,Memory * mem)  //重载语句。这里传入指针，
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	
	//提供工作函数
	void work()
	{
		// 让零件工作起来
		m_cpu->Calculate();
		m_vc->VideoShow();
		m_mem->Storage();   // 写到这就知道要用多态了。
	}
	// 提供析构函数：释放3个电脑零件：
	~Computer()
	{
		// 释放Cpu零件
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//释放显卡内存
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		//释放内存条 零件
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

public:  //电脑的属性只能是cpu videocard 和内存 ，
	// 那为什么写成指针呢？
	// （也许是因为指针保留的是地址）
	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_mem;
};

// 具体厂商的零件多态书写

// Intel 厂商 
class IntelCPU :public CPU
{
public:
	virtual void Calculate()//重写函数
	{
		cout << "Intel的CPU开始工作" << endl;
	}
};
class IntelVideoCard :public VideoCard
{
public:
	virtual void VideoShow()//重写函数
	{
		cout << "Intel的VideoCard开始工作" << endl;
	}
};
class IntelMemory :public Memory
{
public:
	virtual void Storage()//重写函数
	{
		cout << "Intel的Memory开始工作" << endl;
	}
};


// Lenovo厂商 三写

class LenovoCPU :public CPU
{
public:
	virtual void Calculate()//重写函数
	{
		cout << "Lenovo的CPU开始工作" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void VideoShow()//重写函数
	{
		cout << "Lenovo的VideoCard开始工作" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	virtual void Storage()//重写函数
	{
		cout << "Lenovo的Memory开始工作" << endl;
	}
};


void test01()
{
	//第一台电脑零件
	cout << "First computer start work" << endl;
	CPU* intelCpu = new IntelCPU;   // 要调用Intel公司的CPU，继承父类CPU
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMemory = new IntelMemory;
	// 创建第一台电脑
	Computer* computer1 = new Computer(intelCpu, intelCard, intelMemory);  
	computer1->work();
	delete computer1;  //上面一步new了一个computer1 的堆区，这里清除，但是，上面的new InterCPU还没有清除
	cout << "+++++++++++++++++++++++++++++++" << endl;

	//第二台电脑 Lenovo的电脑
	// 创建第一台电脑
	cout << "Second computer start work" << endl;
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard,new LenovoMemory);
	computer2->work();
	delete computer2;  //上面一步new了一个computer1 的堆区，这里清除，但是，上面的new InterCPU还没有清除
	cout << "+++++++++++++++++++++++++++++++" << endl;
	

	//第三台电脑开始工作：
	cout << "Third computer start work" << endl;
	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;  //上面一步new了一个computer1 的堆区，这里清除，但是，上面的new InterCPU还没有清除
	cout << "+++++++++++++++++++++++++++++++" << endl;

}


int main()
{
	test01();
	system("pause");
	return 0;
}