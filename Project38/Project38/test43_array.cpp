// һά�������Ƶ���;
// ͳ���ڴ��еĳ���        sizeof(arr)
// ��ȡ�ڴ��е��׵�ַ      
// 4���ֽڣ�һ����������ռ��4���ֽڵ�λ��
// 
#include<iostream>
using namespace std;
int main()
{
	// 1. ���Ի�ȡ��������ռ���ڴ�ռ�Ĵ�С
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ�õĿռ�: " << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ�õĿռ�: " << sizeof(arr[0]) << endl;
	cout << "�����е�Ԫ�ظ���Ϊ�� " << sizeof(arr) / sizeof(arr[0]) << endl;

	// 2. ����ͨ���������鿴�����׵�ַ
	cout << "�����׵�ַΪ�� " << arr << endl; //16���Ƶ�
	cout << "�����׵�ַΪ�� " << (int)arr << endl; // 10���Ƶ�
	cout << "�����е�һ��Ԫ�صĵ�ַΪ" << &arr[0] << endl;
	cout << "�����е�һ��Ԫ�صĵ�ַΪ" << (int) & arr[0] << endl;

	cout << "�����еڶ���Ԫ�صĵ�ַΪ��" << &arr[1] << endl;
	cout << "�����еڶ���Ԫ�صĵ�ַΪ��" << (int) & arr[1] << endl;

	system("pause");
	return 0;
	// 3. �����ǲ��ܽ��и�ֵ������
}
