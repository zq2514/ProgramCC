#include <iostream>
using namespace std;
#include <ctime>     // �������srand�й�ϵ

int main() {

	// 1��ϵͳ���������
	// 2| ��ҽ��в²�
	// 3 �ж���ҵĲ²�
	// 4 ���¶��˳���Ϸ
	// 5���´���ʾ�´��˻��ǲ�С��

	srand((unsigned int)time(NULL));   // ����һ������ʱ�������� 

	int num = rand() % 100 + 1;   // 1��ϵͳ���������
	int val = 0;
	
	while (1)
	{
		cin >> val;    // 2| ��ҽ��в²�
		if (val > num)   // 3 �ж���ҵĲ²�
		{
			cout << "�´���" << endl;
		}
		else if (val < num)
		{
			cout << "��С��" << endl;
		}
		else     // 4 ���¶��˳���Ϸ
		{
			cout << "��ϲ��¶���" << endl;
			break;
		}
		

	}
	system("pause");

}