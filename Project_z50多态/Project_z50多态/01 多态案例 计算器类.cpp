// �� ��ͨ���� ��  ��̬�ķ�������һ��������
// 
#include<iostream>
using namespace std;
#include<string>;

// ��ͨ����

// ��ͨ���������࣬����Ȩ�ޣ������Ա���ԣ������Ա����
// д���Ժ�����ʵ�������󣻳�ʼ���������ԣ����ö��󷽷���
// main �������ò��Ժ��� 

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



// ��̬����ʵ�ּ�����
// 1���������  �ļ�����
// 2 �̳г����� ��
// 3 �̳г����� ��
// �ȵ�
// д���Ժ���
// main�������ò��Ժ���2


//���������
class abstractCalculator
{
	// ��Ա����
public:
	virtual int getResult()  // Ҫ�̳У���Ҫд �����Ա���� virtual
	{
		return 0;
	}
public:
	int m_Num1;
	int m_Num2;
};


// ����������Ѿ�д�ã�����д �ӷ� ����Ϊ�ࣺ

class AddCalculator:public abstractCalculator
{
public:
	virtual int getResult()  // Ҫ�̳У���Ҫд �����Ա���� virtual
	{
		return m_Num1 + m_Num2;
	}
};

// ������
class SubCalculator:public abstractCalculator
{
public:
	virtual int getResult()  // Ҫ�̳У���Ҫд �����Ա���� virtual
	{
		return m_Num1 - m_Num2;
	}
};

// �˷���
class MulCalculator:public abstractCalculator
{
public:
	virtual int getResult()  // Ҫ�̳У���Ҫд �����Ա���� virtual
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
	// �����ӷ�������
	abstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout <<abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc; // new �� ���ͷ��ڴ����

	// ��������������
	abc = new SubCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;

	// �����˷�������
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