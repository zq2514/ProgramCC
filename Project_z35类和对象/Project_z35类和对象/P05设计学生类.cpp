#include<iostream>
using namespace std;
#include<string>

//������Ͷ���   ��Ķ��� Ȩ�ޣ����Ժ���Ϊ(���е����Ժ���ΪҲ��Ϊ ��Ա 
// ����  Ҳ��Ϊ ��Ա���ԣ���Ա����
// ��Ϊ  Ҳ���� ��Ա���� ��Ա����

class student
{
public:

	string m_Name;
	int m_Id;

	// ��Ϊ����ʾ
	void showMember()
	{
		cout << "������" << m_Name << "\tѧ�ţ�" << m_Id << endl;
	};
	void setName(string name)
	{
		m_Name = name;
	};
	void setId(int Id)
	{
		m_Id = Id;
	}
};

int main()
{
	student s1;
	s1.m_Name = "����";
	s1.m_Id = 1;
	s1.showMember();

	student s2;
	s2.m_Name = "����";
	s2.m_Id = 2;
	s2.showMember();

	student s3;
	s3.setName("����");
	s3.setId(3);
	s3.showMember();

	system("pause");
	return 0;

}