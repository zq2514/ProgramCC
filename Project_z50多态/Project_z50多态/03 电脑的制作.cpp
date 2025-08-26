#include <iostream>
using namespace std;

// �����࣬cpu(����)�� �Կ�����ʾ�����ڴ棨�洢��
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


// �������������������װ�ɵ�����
// ������
// ��д���ԣ���д��Ϊ�����԰���cpu���Կ����ڴ�
class Computer
{
public:
	Computer(CPU * cpu, VideoCard * vc,Memory * mem)  //������䡣���ﴫ��ָ�룬
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	
	//�ṩ��������
	void work()
	{
		// �������������
		m_cpu->Calculate();
		m_vc->VideoShow();
		m_mem->Storage();   // д�����֪��Ҫ�ö�̬�ˡ�
	}
	// �ṩ�����������ͷ�3�����������
	~Computer()
	{
		// �ͷ�Cpu���
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//�ͷ��Կ��ڴ�
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		//�ͷ��ڴ��� ���
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

public:  //���Ե�����ֻ����cpu videocard ���ڴ� ��
	// ��Ϊʲôд��ָ���أ�
	// ��Ҳ������Ϊָ�뱣�����ǵ�ַ��
	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_mem;
};

// ���峧�̵������̬��д

// Intel ���� 
class IntelCPU :public CPU
{
public:
	virtual void Calculate()//��д����
	{
		cout << "Intel��CPU��ʼ����" << endl;
	}
};
class IntelVideoCard :public VideoCard
{
public:
	virtual void VideoShow()//��д����
	{
		cout << "Intel��VideoCard��ʼ����" << endl;
	}
};
class IntelMemory :public Memory
{
public:
	virtual void Storage()//��д����
	{
		cout << "Intel��Memory��ʼ����" << endl;
	}
};


// Lenovo���� ��д

class LenovoCPU :public CPU
{
public:
	virtual void Calculate()//��д����
	{
		cout << "Lenovo��CPU��ʼ����" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void VideoShow()//��д����
	{
		cout << "Lenovo��VideoCard��ʼ����" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	virtual void Storage()//��д����
	{
		cout << "Lenovo��Memory��ʼ����" << endl;
	}
};


void test01()
{
	//��һ̨�������
	cout << "First computer start work" << endl;
	CPU* intelCpu = new IntelCPU;   // Ҫ����Intel��˾��CPU���̳и���CPU
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMemory = new IntelMemory;
	// ������һ̨����
	Computer* computer1 = new Computer(intelCpu, intelCard, intelMemory);  
	computer1->work();
	delete computer1;  //����һ��new��һ��computer1 �Ķ�����������������ǣ������new InterCPU��û�����
	cout << "+++++++++++++++++++++++++++++++" << endl;

	//�ڶ�̨���� Lenovo�ĵ���
	// ������һ̨����
	cout << "Second computer start work" << endl;
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard,new LenovoMemory);
	computer2->work();
	delete computer2;  //����һ��new��һ��computer1 �Ķ�����������������ǣ������new InterCPU��û�����
	cout << "+++++++++++++++++++++++++++++++" << endl;
	

	//����̨���Կ�ʼ������
	cout << "Third computer start work" << endl;
	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;  //����һ��new��һ��computer1 �Ķ�����������������ǣ������new InterCPU��û�����
	cout << "+++++++++++++++++++++++++++++++" << endl;

}


int main()
{
	test01();
	system("pause");
	return 0;
}