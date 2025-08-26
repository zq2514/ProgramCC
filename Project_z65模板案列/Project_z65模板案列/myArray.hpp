#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyArray
{
public:

	//构造函数
	MyArray(int capacity)
	{
		cout << "构造函数调用" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	
	//拷贝构造函数
	MyArray(const MyArray& arr)
	{
		cout << "拷贝函数构造" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//深拷贝 
		//这是先指定了空间，再指定了数据
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			//如果T为对象，而且还包含指针，必须需要重载 = 操作符，因为这个等号不是 构造 而是赋值，
			// 普通类型可以直接= 但是指针类型需要深拷贝
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//重载 operator
	MyArray& operator = (const MyArray& myarray)
	{
		cout << "operator函数构造" << endl;
		// 先判断原来堆区是否有数据，如果有先释放
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		// 深拷贝开始
		this->m_Capacity = myarray.m_Capacity;
		this->m_Size = myarray.m_Size;
		this->pAddress = new T[myarray.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = myarray.pAddress[i];
		}
		return *this;
	}

	//尾插法
	void Push_back(const T& val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	//尾删法
	void Pop_back()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//获取数组大小
	int getSize()
	{
		return this->m_Size;
	}

	//获取数组容量
	int getCapacity()
	{
		return this->m_Capacity;
	}
	// 通过下标访问数组中的元素
	T operator [](int index)
	{
		return this->pAddress[index];
	}

	~MyArray()
	{
		
		if (this->pAddress != NULL)
		{
			cout << "析构函数调用" << endl;
			delete[]this->pAddress;
			this->pAddress = NULL;
			/*this->m_Capacity = 0;
			this->m_Size = 0;*/
		}
	}



private:
	// 数组地址
	// 数组容量
	// 数组大小
	T* pAddress;
	int m_Capacity;
	int m_Size;
};