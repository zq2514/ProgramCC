//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}

#include<iostream>
using namespace std;

int main() {

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int* p = arr;  //ָ�������ָ��

	cout << "��һ��Ԫ�أ� " << arr[0] << endl;
	cout << "ָ����ʵ�һ��Ԫ�أ� " << *p << endl;

	for (int i = 0; i < 10; i++)
	{
		//����ָ���������
		cout << *p << endl;
		p++;  //ָ��ļ�1���������ƫ��4���ֽ�
	}

	system("pause");

	return 0;
}