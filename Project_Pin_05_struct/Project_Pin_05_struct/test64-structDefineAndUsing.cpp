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


//P64 �ṹ��Ķ����ʹ��-----------------------------------------------------------
// �ṹ������Լ�����һ���������ͣ����������;��Ǹ��ֻ����������͵ļ���

//#include<iostream>
//using namespace std;
//# include<string>
//
//struct student
//{
//	//��Ա�б�
//	string name;  //����
//	int age;      //����
//	int score;    //����
//}stu3; //�ṹ�����������ʽ3 
//
//int main() {
//
//	//�ṹ�����������ʽ1
//	//struct student stu1; //struct �ؼ��ֿ���ʡ��
//	student stu1;
//
//	stu1.name = "����";
//	stu1.age = 18;
//	stu1.score = 100;
//
//	cout << "������" << stu1.name << " ���䣺" << stu1.age << " ������" << stu1.score << endl;
//
//	//�ṹ�����������ʽ2
//	struct student stu2 = { "����",19,60 };
//
//	cout << "������" << stu2.name << " ���䣺" << stu2.age << " ������" << stu2.score << endl;
//
//
//	stu3.name = "����";
//	stu3.age = 18;
//	stu3.score = 80;
//
//
//	cout << "������" << stu3.name << " ���䣺" << stu3.age << " ������" << stu3.score << endl;
//
//	system("pause");
//
//	return 0;
//}



////P65 �ṹ��-�ṹ������ 
//#include<iostream>
//using namespace std;
//#include<string>
//
//struct student
//{
//	//��Ա�б�
//	string name;  //����
//	int age;      //����
//	int score;    //����
//};
//
//int main()
//{
//	//�ṹ������
//	struct student arr[3] =
//	{
//		{"����",18,80 },
//		{"����",19,60 },
//		{"����",20,70 }
//	};
//	arr[2].name = "����";
//	arr[2].age = 55;
//	arr[2].score = 55;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "������" << arr[i].name << " ���䣺" << arr[i].age << " ������" << arr[i].score << endl;
//	}
//
//	system("pause");
//
//	return 0;
//}

//// P66 �ṹ��-�ṹ��ָ��--------------------------------------------------------------------
//#include<iostream>
//using namespace std;
//#include<string>
// 
//struct student
//{
//	//��Ա�б�
//	string name;  //����
//	int age;      //����
//	int score;    //����
//};
//
//int main() {
//
//	struct student stu = { "����",18,100, };
//
//	struct student* p = &stu;    // ���� �ṹ�����͵�ָ��
//
//
//	p->score = 80; //ָ��ͨ�� -> ���������Է��ʳ�Ա
//
//	cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
//
//	system("pause");
//
//	return 0;
//}


// P68 �ṹ��-�ṹ��Ƕ�׽ṹ��

// P69 �ṹ��-�ṹ������������

//// P70 �ṹ�尸��1-------------------------------------------------------------------------
//#include<iostream>
//using namespace std;
//#include<string>
//#include<ctime>
//
//struct student
//{
//	string sName;
//	int score ;
//};
//
//struct teacher
//{
//	string tName;
//	struct student stu[5];
//};
//
//void AllocateTeacher(struct teacher tArray[], int len)
//{
//	string nameSeeds = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].tName = "teachar_";
//		tArray[i].tName += nameSeeds[i];
//		for (int j = 0; j < 5; j++)
//		{
//			tArray[i].stu[j].sName = "student_";
//			tArray[i].stu[j].sName += nameSeeds[j];
//			tArray[i].stu[j].score = rand()%60+40;
//		}
//	}
//}
//
//void printInfo(struct teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "��ʦ������" << tArray[i].tName << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\tѧ��������" << tArray[i].stu[j].sName << "ѧ���ĳɼ��� " << tArray[i].stu[j].score << endl;
//		}
//	}
//}
//
// 
//int main()
//{
//	//���������
//	srand((unsigned int)time(NULL));
//	struct teacher tArray[3];
//	//struct student stu[5];
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//
//	AllocateTeacher(tArray,len);
//	printInfo(tArray,len);
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



//// P71 �ṹ�尸��2------------------------------------------------------------------
//#include<iostream>
//using namespace std;
//#include<string>
// 
//struct hero
//{
//	string name;
//	int age;
//	string sex;
//};
//
//
//void bubbleSort(struct hero heroArray[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (heroArray[j].age > heroArray[j + 1].age)
//			{
//				struct hero temp = heroArray[j];
//				heroArray[j] = heroArray[j + 1];
//				heroArray[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void printInfo(struct hero heroArray[], int len)
//{
//	cout << "�����Ľ����" << endl;
//	for (int i = 0; i < len; i++)
//	{
//		cout << "������ " << heroArray[i].name << " �Ա� " << heroArray[i].sex 
//			<< " ���䣺 " << heroArray[i].age << endl;
//	}
//}
//
//int main()
//{
//	struct hero heroArray[5] =
//	{
//		{"����",23,"��"},
//		{"����",22,"��"},
//		{"�ŷ�",20,"��"},
//		{"����",21,"��"},
//		{"����",19,"Ů"},
//	};
//
//	int len = sizeof(heroArray) / sizeof(heroArray[0]);
//	cout << " ����ǰ�Ľ����" << endl;
//	for (int i = 0; i < len; i++)
//	{
//		cout << "������ " << heroArray[i].name << " �Ա� " << heroArray[i].sex
//			<< " ���䣺 " << heroArray[i].age << endl;
//	}
//	bubbleSort(heroArray,len);
//	printInfo(heroArray,len);
//
//	system("pause");
//	return 0;
//}