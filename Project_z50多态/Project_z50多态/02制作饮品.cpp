#include <iostream>
using namespace std;
#include <string>

class AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil() = 0;
	// ����
	virtual void Brew() = 0;
	// ���뱭��
	virtual void PourInCup() = 0;
	// ��Ӳ�Ʒ
	virtual void AddSomething() = 0;

	// �涨����
	void MakeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		AddSomething();
	}
};

// ����������Ѿ�д�ã�������м̳�

class Tea :public AbstractDrinking
{
public:
	//������д
	virtual void Boil()
	{
		cout << "�ղ�ˮ" << endl;
	}
	virtual void Brew()
	{
		cout << "���" << endl;
	}
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	virtual void AddSomething()
	{
		cout << "������" << endl;
	}

};


// ��������
class Coffee :public AbstractDrinking
{
public:
	//������д
	virtual void Boil()
	{
		cout << "�տ���ˮ" << endl;
	}
	virtual void Brew()
	{
		cout << "�󿧷�" << endl;
	}
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	virtual void AddSomething()
	{
		cout << "���ţ�̺���" << endl;
	}

};

// ������֭
class Juice :public AbstractDrinking
{
public:
	//������д
	virtual void Boil()
	{
		cout << "��juiceˮ" << endl;
	}
	virtual void Brew()
	{
		cout << "��juice" << endl;
	}
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	virtual void AddSomething()
	{
		cout << "���orage" << endl;
	}

};


void DoWork(AbstractDrinking * drink)//   AbstractDrinking * drink = new Tea  ����ָ��ָ���������
{
	drink->MakeDrink();
	delete drink; // �ͷŶ����ڴ棬��ֹ�ڴ�й¶
}

void test01()
{
	// ���ò��Զ��󣬱���忧��
	DoWork(new Tea);  // �����д���Tea����
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
