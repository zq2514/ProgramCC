#include<iostream>
using namespace std;


template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}



template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i+1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			mySwap(arr[max],arr[i]);
		}
	}
}



template<typename T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	char charArr[] = "bdcfagh";
	int num = sizeof(charArr) / sizeof(charArr[0]);
	mySort(charArr,num);
	printArray(charArr,num);
}

void test02()
{
	int intArr[] = {7,5,8,1,3,9,2,4,6};
	int num = sizeof(intArr) / sizeof(intArr[0]);
	mySort(intArr,num);
	printArray(intArr,num);
}



int main()
{
	test01();
	test02();

	system("pause");
	system("cls");
}