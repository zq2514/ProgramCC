//#include<iostream>
//using namespace std;
//#include<string>
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}

//// P103 ��Ա����˽�л�=================================================================
//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person {
//public:
//
//	//�������ÿɶ���д
//	void setName(string name) {
//		m_Name = name;
//	}
//	string getName()
//	{
//		return m_Name;
//	}
//
//
//	//��ȡ���� 
//	int getAge() {
//		return m_Age;
//	}
//	//��������
//	void setAge(int age) {
//		if (age < 0 || age > 150)   //�л����� ��Ч�Լ��
//		{
//			cout << "���������!" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	//��������Ϊֻд
//	void setLover(string lover) {
//		m_Lover = lover;
//	}
//
//private:
//	string m_Name; //�ɶ���д  ����
//
//	int m_Age; //ֻ��  ����
//
//	string m_Lover; //ֻд  ����
//};
//
//
//int main() {
//
//	Person p;
//	//��������
//	p.setName("����");
//	cout << "������ " << p.getName() << endl;
//
//	//��������
//	p.setAge(50);
//	cout << "���䣺 " << p.getAge() << endl;
//
//	//��������
//	p.setLover("�Ծ�");
//	//cout << "���ˣ� " << p.m_Lover << endl;  //ֻд���ԣ������Զ�ȡ
//
//	system("pause");
//
//	return 0;
//}



//// p104 ����1 �������� ================================================================
//#include<iostream>
//using namespace std;
//#include<string>
//
//class cube   // Ȩ�� ���� ��Ϊ
//{
//public:
//	// ����������ĳ�
//	void setL(int c_L)
//	{
//		m_L = c_L;
//	}
//	// ��ȡ��
//	int getL()
//	{
//		return m_L;
//	}
//	// ���ÿ�
//	void setW(int c_W)
//	{
//		m_W = c_W;
//	}
//	// ��ȡ��
//	int getW()
//	{
//		return m_W;
//	}
//	// ���ø�
//	void setH(int c_H)
//	{
//		m_H = c_H;
//	}
//	// ��ȡ��
//	int getH()
//	{
//		return m_H;
//	}
//
//	// �������
//	int caculateS()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
//	}
//
//	int caculateV()
//	{
//		return m_L * m_W * m_H;
//	}
//
//	bool isSameByClass(cube &c)
//	{
//		if (m_L== c.getL() && m_W == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//		return false;
//	}
//	// �������
//
//private:
//	int m_L;   // ��
//	int m_W;   // ������Ŀ�
//	int m_H;   // ������ĸߣ��������Ե�һ��
//
//};
//
//// ����ȫ�ֺ����ж� �����������Ƿ����
//bool isSame(cube &c1, cube &c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//
//	cout << "c1����� " << c1.caculateS() << endl;
//	cout << "c1�����Ϊ " << c1.caculateV() << endl;
//
//	cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(11);
//
//	bool ref = isSame(c1, c2);
//	if (ref)
//	{
//		cout << "ȫ�ֱ��������н��Ϊ��������������ͬ" << endl;
//	}
//	else
//	{
//		cout << "ȫ�ֱ��������н��Ϊ��c1��c2�ǲ���ȵ�" << endl;
//	}
//
//	bool ret = c1.isSameByClass(c2);
//	if (ref)
//	{
//		cout << "��Ա�������н��Ϊ��������������ͬ" << endl;
//	}
//	else
//	{
//		cout << "��Ա�������н��Ϊ��c1��c2�ǲ���ȵ�" << endl;
//	}
//
//	system("pause");
//	return 0;
//}





















/*

// P105 ���Բ���ж� ================================================================================================
#include<iostream>
using namespace std;
#include<string>


// ����
class Point
{
public:
	// ���õ�
	// ����x
	void setX(int x)
	{
		m_X = x;	
	}
	// ��ȡx
	int getX()
	{
		return m_X;
	}
	// ����y
	void setY(int y)
	{
		m_Y = y;
	}
	// ��ȡy
	int getY()
	{
		return m_Y;
	}

	// ��ȡ��
private :
	int m_X;
	int m_Y;
};
 
 
 
 //Բ��
class Circle
{
public:
	// ���ð뾶
	void setR(int r)
	{
		m_R = r;
	}
	// ��ȡ�뾶
	int getR()
	{
		return m_R;
	}

	// ����Բ��
	void setCenter(Point center)
	{
		m_Center = center;
	}
	// ��ȡԲ��
	Point getCenter()
	{
		return m_Center;
	}

private :
	int m_R;
	Point m_Center; // Բ��   ��������
};

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle& c, Point& p)
{
	//��������֮��ľ���
	int distance  = 
	(c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	//����뾶��ƽ��
	int rdistance = c.getR() * c.getR();
	// �жϵ������Բ�Ĺ�ϵ
	if (distance < rdistance)
	{
		cout << "����԰��" << endl;
	}
	else if(distance == rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}


int main()
{
	//�����㣬����㣬Բ�ĵ�
	Point p1;
	p1.setX(0);
	p1.setY(10);

	Point p2;
	p2.setX(10);
	p2.setY(10);

	// ����Բ
	Circle c1;
	c1.setR(10);
	c1.setCenter(p2);

	isInCircle(c1, p1);

	
	system("pause");
	return 0;
}

*/


























//// P105 ���Բ���ж�  ���ļ��ֿ�д=====[��������ļ���Ҫ��Դ�ļ������circle.cpp and Point.cpp]===========================================================================================
//#include<iostream>
//using namespace std;
//#include<string>
//#include "Point.h"   // д��ͷ�ļ������������
//#include "circle.h"
//
////�жϵ��Բ�Ĺ�ϵ
//void isInCircle(Circle& c, Point& p)
//{
//	//��������֮��ľ���
//	int distance  = 
//	(c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//
//	//����뾶��ƽ��
//	int rdistance = c.getR() * c.getR();
//	// �жϵ������Բ�Ĺ�ϵ
//	if (distance < rdistance)
//	{
//		cout << "����԰��" << endl;
//	}
//	else if(distance == rdistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
//	}
//}
//
//int main()
//{
//	//�����㣬����㣬Բ�ĵ�
//	Point p1;
//	p1.setX(0);
//	p1.setY(10);
//
//	Point p2;
//	p2.setX(10);
//	p2.setY(10);
//
//	// ����Բ
//	Circle c1;
//	c1.setR(10);
//	c1.setCenter(p2);
//
//	isInCircle(c1, p1);
//
//	
//	system("pause");
//	return 0;
//}



























// P106 ���캯������������===========================================================================



//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person
//{
//public:
//	//���캯��
//	//1. ���캯����û�з���ֵҲ��дvoid
//	/*2. ����������������ͬ
//	  3. ���캯�������в�������˿��Է�������
//	  4. �����ڵ��ö���ʱ����Զ����ù��죬�����ֶ�����, ����ֻ�����һ��*/
//	
//	Person()
//	{
//		cout << "Person�Ĺ��캯������" << endl;
//	}
//	//��������
//		/*1. ����������û�з���ֵҲ��дvoid
//		2. ����������������ͬ, ������ǰ���Ϸ���  ~
//		3. ���������������в�������˲����Է�������
//		4. �����ڶ�������ǰ���Զ����������������ֶ�����, ����ֻ�����һ��*/
//
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//
//};
//
//void test01()
//{
//	Person p;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}




















//// P107-01 �����ķ���͵���
//
//
//#include<iostream>
//using namespace std;
//#include<string>
//
//
////1�����캯������
//// ���ղ��������Ϊ �вκ��޲ι���   �޲��ֳ�ΪĬ�Ϲ��캯��
//// �������ͷ����Ϊ ��ͨ����Ϳ�������
//class Person
//{
//public:
//	Person()
//	{
//		cout << "�޲ι��캯��" << endl;  //���캯�����Ǻ�����һ���ĺ���Ϊ���캯��
//	}
//	Person(int a)      //�вι��캯�� (д�����Ǻ������أ��������ص��������ǣ��������ͣ�����������) 
//	{
//		age = a;
//		cout << "�вι��캯��" << endl;
//	}
//	
//	//�������캯��
//	Person(const Person &p)   //��ߴ��������ã�ֱ�Ӵ������ᱨ��
//	{
//		age = p.age;
//		cout << "�������캯��!" << endl;
//	}
//
//	//��������
//	~Person() 
//	{
//		cout << "��������!" << endl;
//	}
//
//public:
//	int age;
//};
//
////���Ժ���
//void test01()
//{
//	Person p; //�����޲ι��캯��
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




















//// P107-02 �����ķ���͵���===================================================================
//
//#include<iostream>
//using namespace std;
//#include<string>
//
//
////1�����캯������
//// ���ղ��������Ϊ �вκ��޲ι���   �޲��ֳ�ΪĬ�Ϲ��캯��
//// �������ͷ����Ϊ ��ͨ����Ϳ�������
//class Person
//{
//public:
//	Person()
//	{
//		cout << "�޲ι��캯��" << endl;  //���캯�����Ǻ�����һ���ĺ���Ϊ���캯��
//	}
//	Person(int a)      //�вι��캯�� (д�����Ǻ������أ��������ص��������ǣ��������ͣ�����������) 
//	{
//		age = a;
//		cout << "�вι��캯��" << endl;
//	}
//
//	//�������캯��
//	Person(const Person& p)   //��ߴ��������ã�ֱ�Ӵ������ᱨ��
//	{
//		age = p.age;
//		cout << "�������캯��!" << endl;
//	}
//
//	//��������
//	~Person()
//	{
//		cout << "��������!" << endl;
//	}
//
//public:
//	int age;
//};
//
////���Ժ���  //�����޲ι��캯��
//void test01()
//{
//	Person p; //�����޲ι��캯��
//}
//
//
//// ���Ժ���2  //�����вεĹ��캯��
//void test02()
//{
//	//2.1  ���ŷ�������
//	//2.2 ��ʽ��
//	//2.3 ��ʽת����
//
//	//2.1  ���ŷ�������
//	Person p1(10);
//	//ע��1�������޲ι��캯�����ܼ����ţ�������˱�������Ϊ����һ����������,������ʾ��
//	//Person p2();
//
//
//	//2.2 ��ʽ��
//	Person p2 = Person(10);    //�вι��캯������
//	Person p3 = Person(p3);    // �������캯������
//	//2.3 ��ʽת����
//	Person p4 = 10;   // Person p4 = Person(10);  ��������������ļ�д
//	Person p5 = p4;   // Person p5 = Person(p4); 
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}




















//C++�п������캯������ʱ��ͨ�����������
//
//* ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//* ֵ���ݵķ�ʽ������������ֵ
//* ��ֵ��ʽ���ؾֲ�����



//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person {
//public:
//	Person() {
//		cout << "�޲ι��캯��!" << endl;
//		mAge = 0;
//	}
//	Person(int age) {
//		cout << "�вι��캯��!" << endl;
//		mAge = age;
//	}
//	Person(const Person& p) {
//		cout << "�������캯��!" << endl;
//		mAge = p.mAge;
//	}
//	//�����������ͷ��ڴ�֮ǰ����
//	~Person() {
//		cout << "��������!" << endl;
//	}
//public:
//	int mAge;
//};
////* ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01() {
//
//	Person man(100); //p�����Ѿ��������
//	Person newman(man); //���ÿ������캯��
//	Person newman2 = man; //��������
//
//	//Person newman3;
//	//newman3 = man; //���ǵ��ÿ������캯������ֵ����
//}
////2. ֵ���ݵķ�ʽ������������ֵ
////�൱��Person p1 = p;
//void doWork(Person p1) 
//{
//	
//}
//
//
//void test02()
//{
//	Person p; //�޲ι��캯��
//	doWork(p);    // ִ�иó����ʱ�����п���
//}
//
////3. ��ֵ��ʽ���ؾֲ�����
//Person doWork2()
//{
//	Person p1;
//	cout << "��ַΪ" << (int*)&p1 << endl;  //���л��ӡ��ַ
//	return p1;
//}
//
//void test03()
//{
//	Person p = doWork2();
//	cout << "��ַΪ" << (int*)&p << endl;
//}
//
//
//int main() {
//
//	//test01();
//	//test02();
//	test03();
//
//	system("pause");
//
//	return 0;
//}


























// P109 ���캯���ĵ��ù���========================================================================



//#### 4.2.4 ���캯�����ù���
//
//Ĭ������£�c++���������ٸ�һ�������3������
//
//1��Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
//
//2��Ĭ����������(�޲Σ�������Ϊ��)
//
//3��Ĭ�Ͽ������캯���������Խ���ֵ����
//
//
//
//���캯�����ù������£�
//
//* ����û������вι��캯����c++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
//
//
//* ����û����忽�����캯����c++�������ṩ�������캯��


//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person {
//public:
//	//�޲Σ�Ĭ�ϣ����캯��
//	Person() {
//		cout << "�޲ι��캯��!" << endl;
//	}
//	//�вι��캯��
//	Person(int a) {
//		age = a;
//		cout << "�вι��캯��!" << endl;
//	}
//	//�������캯��
//	Person(const Person& p) {
//		age = p.age;
//		cout << "�������캯��!" << endl;
//	}
//	//��������
//	~Person() {
//		cout << "��������!" << endl;
//	}
//public:
//	int age;
//};
//
//void test01()
//{
//	Person p1(18);
//	//�����д�������죬���������Զ���ӿ������죬������ǳ��������
//	Person p2(p1);
//
//	cout << "p2������Ϊ�� " << p2.age << endl;
//}
//
//void test02()
//{
//	//����û��ṩ�вι��죬�����������ṩĬ�Ϲ��죬���ṩ��������
//	Person p1; //��ʱ����û��Լ�û���ṩĬ�Ϲ��죬�����
//	Person p2(10); //�û��ṩ���в�
//	Person p3(p2); //��ʱ����û�û���ṩ�������죬���������ṩ
//
//	//����û��ṩ�������죬�����������ṩ�������캯��
//	Person p4; //��ʱ����û��Լ�û���ṩĬ�Ϲ��죬�����
//	Person p5(10); //��ʱ����û��Լ�û���ṩ�вΣ������
//	Person p6(p5); //�û��Լ��ṩ��������
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}






















// P110.1 �����ǳ����============================================================================


//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ���޲ι��캯��" << endl;
//	}
//	Person(int age)
//	{
//		m_age = age;
//		cout << "Person���вι��캯������" << endl;
//	}
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//	int m_age;
//};
//void test01()
//{
//	Person p1(18);
//	cout << "Person������Ϊ�� " << p1.m_age << endl;
//	Person p2(p1);
//	cout << "p2������Ϊ��" << p2.m_age << endl;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

// ����ǳ����û���κ����⣬������иĽ���
// 
// 
// 
// P110.2 �����ǳ����============================================================================

//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ���޲ι��캯��" << endl;
//	}
//	Person(int age,int height)
//	{
//		m_age = age;
//		m_Height =  new int(height);  //�˴�û��ֱ�ӽ��и�ֵ���������ǽ�����new�������ڶ������������ڴ档��������������ָ�룬��������Ҳ��ָ�롣 
//		cout << "Person���вι��캯������" << endl;
//	}
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//	int m_age;
//	int* m_Height;   // ������ָ�룬���ڽ���new�����������ݣ�����������ֻ����ָ�����ݽ���
//};
//void test01()
//{
//	Person p1(18,160);
//	cout << "Person������Ϊ�� " << p1.m_age << "  p1�����Ϊ��"<<*p1.m_Height<<endl;
//	Person p2(p1);
//	cout << "p2������Ϊ��" << p2.m_age << "  p2�����Ϊ��" << *p2.m_Height << endl;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//  ����P110.2��������γ��򣩿������У���ʵ�ʲ��ԡ�
//  ������new���ڶ����������ڴ棬���ڴ��ɳ���Ա���Կ��٣����н�����ҲӦ���ɳ���Ա�����ͷ�
// ��Ȼ����ĳ���û�н����ͷŴ�������P110.3 �����ͷŲ���


// P110.3 �����ǳ����==============��������ڴ��ͷŲ���==============================================================

//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ���޲ι��캯��" << endl;
//	}
//	Person(int age, int height)
//	{
//		m_age = age;
//		m_Height = new int(height);  //�˴�û��ֱ�ӽ��и�ֵ���������ǽ�����new�������ڶ������������ڴ档��������������ָ�룬��������Ҳ��ָ�롣 
//		cout << "Person���вι��캯������" << endl;
//	}
//	Person(const Person& p)
//	{		
//		cout << " �������캯���ĵ���" << endl;
//		m_age = p.m_age;
//		//m_Height = p.m_Height;    // �����������Լ���д�������ͬ������д������
//		// �������
//		m_Height = new int(*p.m_Height);
//	}
//
//	~Person() // �������������ã�������Ա�ڶ������ٵ��ڴ�ռ����к��ͷ�
//	{
//		cout << "Person��������������" << endl;
//		if (m_Height != NULL)
//		{
//			delete m_Height;   // ����ڴ�
//			m_Height = NULL;   // ��ָ���ÿգ���ֹҰָ�����
//			// �ͷŲ�����delete and �ÿ�
//		}
//	}
//	int m_age;
//	int* m_Height;   // ������ָ�룬���ڽ���new�����������ݣ�����������ֻ����ָ�����ݽ���
//};
//void test01()
//{
//	Person p1(18, 160);
//	cout << "Person������Ϊ�� " << p1.m_age << "  p1�����Ϊ��" << *p1.m_Height << endl;
//	Person p2(p1);
//	cout << "p2������Ϊ��" << p2.m_age << "  p2�����Ϊ��" << *p2.m_Height << endl;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

// �ܽ᣺
// �������������þ�������ڴ档�ڶ��������˳������������
// ����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������






















//P111 ��ʼ���б�===========================================================================

//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person {
//public:
//
//	////��ͳ��ʽ��ʼ��
//	//Person(int a, int b, int c) {
//	//	m_A = a;
//	//	m_B = b;
//	//	m_C = c;
//	//}
//
//	//��ʼ���б�ʽ��ʼ��
//	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {}
//	void PrintPerson() {
//		cout << "mA:" << m_A << endl;
//		cout << "mB:" << m_B << endl;
//		cout << "mC:" << m_C << endl;
//	}
//private:
//	int m_A;
//	int m_B;
//	int m_C;
//};
//
//int main() {
//
//	Person p(1, 2, 3);
//	p.PrintPerson();
//
//
//	system("pause");
//
//	return 0;
//}
























//P112 �������Ϊ���Ա===========================================================================
//#include<iostream>
//using namespace std;
//#include<string>
//
//class Phone
//{
//public:
//	Phone(string name)
//	{
//		m_PhoneName = name;
//		cout << "Phone����" << endl;
//	}
//
//	~Phone()
//	{
//		cout << "Phone����" << endl;
//	}
//
//	string m_PhoneName;
//
//};
//
//
//class Person
//{
//public:
//
//	//��ʼ���б���Ը��߱�����������һ�����캯��
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person����" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person����" << endl;
//	}
//
//	void playGame()
//	{
//		cout << m_Name << " ʹ��" << m_Phone.m_PhoneName << " ���ֻ�! " << endl;
//	}
//
//	string m_Name;
//	Phone m_Phone;
//
//};
//void test01()
//{
//	//�����г�Ա�����������ʱ�����ǳƸó�ԱΪ �����Ա
//	//�����˳���� ���ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
//	//����˳���빹���෴
//	Person p("����", "ƻ��X");
//	p.playGame();
//
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}






















//P113   4.2.8 ��̬��Ա=================**ʾ��1 ��**��̬��Ա����==============================================

	//��̬��Ա�����ص㣺
	//1 �ڱ���׶η����ڴ�
	//2 ���������������ʼ��
	//3 ���ж�����ͬһ������

//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person
//{
//public:
//
//	//1 �ڱ���׶η����ڴ�
//	//3 ���ж�����ͬһ������
//	//2 ���������������ʼ��
//	
//	static int m_A;
//
//private:
//
//	static int m_B;  // ˽��Ȩ���µľ�̬��Ա���������ڿ��Է��ʣ����ⲻ���Է���
//
//};
//
//int Person::m_A = 10;   //2 ���������������ʼ����û�����У�����������
//int Person::m_B = 300;
//
//void test01()
//{
//	Person p1;
//	p1.m_A = 100;
//	cout <<"p1��ֵΪ��"<<  p1.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << "p2��ֵΪ��" << p2.m_A << endl;  // �������ж�����ͬһ������
//
//}
//
//
//void test02()
//{
//	//��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
//	//��̬��Ա�������ַ��ʷ�ʽ
//
//
//	//1��ͨ������
//	Person p3;
//	cout << "test02���ã�p3��ֵΪ��" << p3.m_A << endl;  // �������ж�����ͬһ������
//	//200
//
//
//	//2��ͨ������
//	cout << "test02 ͨ���������з��ʾ�̬��Ա������" << Person::m_A << endl;
//	//cout << Person::m_B << endl;  // �������ʲ�����������ʲ���˽�о�̬��Ա����
//}
//
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}























//P113   4.2.8 ��̬��Ա=================**ʾ��1 ��**��̬��Ա����==============================================



//#include<iostream>
//using namespace std;
//#include<string>
//
////��̬��Ա�����ص㣺
//	//1 ������һ������
//	//2 ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//
//
//class Person
//{
//
//public:
//
//	//��̬��Ա�����ص㣺
//	//1 ������һ������
//	//2 ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//
//	static void func()
//	{
//		cout << "func����" << endl;
//		m_A = 100;
//		//m_B = 100; //���󣬲����Է��ʷǾ�̬��Ա����
//	}
//
//	static int m_A; //��̬��Ա����
//	int m_B; // 
//private:
//
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//	static void func2()
//	{
//		cout << "func2����" << endl;
//	}
//};
//int Person::m_A = 10;
//
//
//void test01()
//{
//	//��̬��Ա�������ַ��ʷ�ʽ
//
//	//1��ͨ������
//	Person p1;
//	p1.func();
//
//	//2��ͨ������
//	Person::func();
//
//
//	//Person::func2(); //˽��Ȩ�޷��ʲ���
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}


























//#include<iostream>
//using namespace std;
//#include<string>
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}

















//#include<iostream>
//using namespace std;
//#include<string>
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}