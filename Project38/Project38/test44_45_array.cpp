#include<iostream>
using namespace std;
int main()
{

	int arr[5] = { 300,350,200,400,250 };
	//int arr[5] = { 4,5,2,3,1 };
	// ��ӡ����
	cout << "��ӡԭʼ����" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	// ȷ����ʼ����ֹ�±꣬�������м丳ֵ����
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	int temp = 0;
	// �Ƚ���ʼ����ֹ�±��λ�õĴ�С�����Ƿ���в���
	// ���и�ֵ����
	//��ʼλ��++ ��ֹλ��--

	while (start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	
	// ��ӡ���ú�ľ���
	cout << "��ӡ���ú�ľ���" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}