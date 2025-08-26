#include<iostream>
using namespace std;
#include<string>
#include"myArray.hpp"

void printIntArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}



void test01()
{
	MyArray<int>array1(10);

	/*MyArray<int>arr2(arr1);

	MyArray<int>arr3(10);
	arr3 = arr2;*/
	for (int i = 0; i < 10; i++)
	{
		array1.Push_back(i);
	}
	cout << "array1��ӡ���" << endl;
	printIntArray(array1);
	cout << "array1�Ĵ�С��" << array1.getSize() << endl;
	cout << "array1��������" << array1.getCapacity() << endl;

	cout << "--------------------------" << endl;

	MyArray<int> array2(array1);
	array2.Pop_back();
	array2.Pop_back();
	cout << "array2��ӡ�����" << endl;
	printIntArray(array2);
	cout << "array2�Ĵ�С��" << array2.getSize() << endl;
	cout << "array2��������" << array2.getCapacity() << endl;
}


class Person
{
public:
	Person() {};
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

public:
	string m_Name;
	int m_Age;
};


int main()
{
	test01();
	system("pause");
	return 0;
}