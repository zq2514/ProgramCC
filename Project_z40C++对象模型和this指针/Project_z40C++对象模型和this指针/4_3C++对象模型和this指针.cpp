


//#### 4.3.1 ��Ա�����ͳ�Ա�����ֿ��洢=========================================================
//
//
//
//��C++�У����ڵĳ�Ա�����ͳ�Ա�����ֿ��洢
//ֻ�зǾ�̬��Ա������������Ķ�����
//��̬��Ա���� ��������Ķ�����
//�Ǿ�̬��Ա��������������Ķ�����
//��̬��Ա��������������Ķ�����

//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person
//{
//	
//};
//void test01()
//{
//	Person p1;
//	cout << "size of the p1:   " <<sizeof(p1)<< endl;   // �����в������κ�����Ϣ��ʱ�򣬿ն����ռ�õ��ڴ�ռ�Ϊ1�ֽ�
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}

























//thisָ�����================================================================================
//
//thisָ�����;��
//1.������Ƴ�ͻ
//2 ���ض�������*this

//#include<iostream>
//using namespace std;
//#include<string>
//class Person
//{
//public:
//	Person(int age)
//	{
//		//age = age;     //error 
//		this->age = age;   //���û�����this��  age�ͻ��ظ�������֪����ʹ��ã�
//		
//	}
//	void PersonAddAge(Person &p)
//	{
//		this->age += p.age;
//	}
//
//	Person& PersonAddAge02(Person& p)  //���λ�ò���  &   �Ļ�������ͻ����ԭ����
//		// ����& ��������ֵ�ķ�ʽ��ʽ���أ���ᴴ��һ���µĶ��󣬶����ǽ�ֵ���ظ�Ŀ�����Ŀ��p
//		// ��& ��������ָ��ķ�ʽ���أ��õ�һֱ���ǵ��ö��� �ĵ�ַ������λ��
//	{
//		this->age += p.age;
//		return *this;
//	}
//
//	int age;
//};
//
//void test01()  // ��������
//{
//	Person p1(10);
//	cout << "p1������Ϊ��" << p1.age << endl;
//}
//
//
//void test02()//2 ���ض�������*this
//{
//	Person p2(10);
//	Person p3(10);	
//	p3.PersonAddAge(p2);  // ������Ҫʵ�ְ�p2 ������ �ӵ�p3����
//
//	cout << "p3's age is:  " << p3.age << endl;    // result�� 20
//}
//
//void test03()//2 ���ض�������*this  �����Ӳ���ʵ��
//{
//	Person p4(10);
//	Person p5(10);
//	p5.PersonAddAge02(p4).PersonAddAge02(p4).PersonAddAge02(p4);  // ������Ҫʵ�ְ�p2 ������ �ӵ�p3����
//
//	cout << "p5's age is:  " << p5.age << endl;    // result�� 20
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	test03();
//
//	system("pause");
//
//	return 0;
//}





















//P116 ��ָ����ʳ�Ա����===========================================================================

#include<iostream>
using namespace std;
#include<string>

int main() 
{


	system("pause");

	return 0;
}
















































//P116 

//#include<iostream>
//using namespace std;
//#include<string>
//
//int main() 
//{
//
//
//	system("pause");
//
//	return 0;
//}