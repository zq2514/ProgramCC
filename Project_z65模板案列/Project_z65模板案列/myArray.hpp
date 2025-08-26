#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyArray
{
public:

	//���캯��
	MyArray(int capacity)
	{
		cout << "���캯������" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	
	//�������캯��
	MyArray(const MyArray& arr)
	{
		cout << "������������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//��� 
		//������ָ���˿ռ䣬��ָ��������
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			//���TΪ���󣬶��һ�����ָ�룬������Ҫ���� = ����������Ϊ����ȺŲ��� ���� ���Ǹ�ֵ��
			// ��ͨ���Ϳ���ֱ��= ����ָ��������Ҫ���
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//���� operator
	MyArray& operator = (const MyArray& myarray)
	{
		cout << "operator��������" << endl;
		// ���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		// �����ʼ
		this->m_Capacity = myarray.m_Capacity;
		this->m_Size = myarray.m_Size;
		this->pAddress = new T[myarray.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = myarray.pAddress[i];
		}
		return *this;
	}

	//β�巨
	void Push_back(const T& val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	//βɾ��
	void Pop_back()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//��ȡ�����С
	int getSize()
	{
		return this->m_Size;
	}

	//��ȡ��������
	int getCapacity()
	{
		return this->m_Capacity;
	}
	// ͨ���±���������е�Ԫ��
	T operator [](int index)
	{
		return this->pAddress[index];
	}

	~MyArray()
	{
		
		if (this->pAddress != NULL)
		{
			cout << "������������" << endl;
			delete[]this->pAddress;
			this->pAddress = NULL;
			/*this->m_Capacity = 0;
			this->m_Size = 0;*/
		}
	}



private:
	// �����ַ
	// ��������
	// �����С
	T* pAddress;
	int m_Capacity;
	int m_Size;
};