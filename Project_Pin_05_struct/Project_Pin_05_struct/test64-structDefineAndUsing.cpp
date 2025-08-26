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


//P64 结构体的定义和使用-----------------------------------------------------------
// 结构体就是自己定义一种数据类型，该数据类型就是各种基础数据类型的集合

//#include<iostream>
//using namespace std;
//# include<string>
//
//struct student
//{
//	//成员列表
//	string name;  //姓名
//	int age;      //年龄
//	int score;    //分数
//}stu3; //结构体变量创建方式3 
//
//int main() {
//
//	//结构体变量创建方式1
//	//struct student stu1; //struct 关键字可以省略
//	student stu1;
//
//	stu1.name = "张三";
//	stu1.age = 18;
//	stu1.score = 100;
//
//	cout << "姓名：" << stu1.name << " 年龄：" << stu1.age << " 分数：" << stu1.score << endl;
//
//	//结构体变量创建方式2
//	struct student stu2 = { "李四",19,60 };
//
//	cout << "姓名：" << stu2.name << " 年龄：" << stu2.age << " 分数：" << stu2.score << endl;
//
//
//	stu3.name = "王五";
//	stu3.age = 18;
//	stu3.score = 80;
//
//
//	cout << "姓名：" << stu3.name << " 年龄：" << stu3.age << " 分数：" << stu3.score << endl;
//
//	system("pause");
//
//	return 0;
//}



////P65 结构体-结构体数组 
//#include<iostream>
//using namespace std;
//#include<string>
//
//struct student
//{
//	//成员列表
//	string name;  //姓名
//	int age;      //年龄
//	int score;    //分数
//};
//
//int main()
//{
//	//结构体数组
//	struct student arr[3] =
//	{
//		{"张三",18,80 },
//		{"李四",19,60 },
//		{"王五",20,70 }
//	};
//	arr[2].name = "赵六";
//	arr[2].age = 55;
//	arr[2].score = 55;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "姓名：" << arr[i].name << " 年龄：" << arr[i].age << " 分数：" << arr[i].score << endl;
//	}
//
//	system("pause");
//
//	return 0;
//}

//// P66 结构体-结构体指针--------------------------------------------------------------------
//#include<iostream>
//using namespace std;
//#include<string>
// 
//struct student
//{
//	//成员列表
//	string name;  //姓名
//	int age;      //年龄
//	int score;    //分数
//};
//
//int main() {
//
//	struct student stu = { "张三",18,100, };
//
//	struct student* p = &stu;    // 定义 结构体类型的指针
//
//
//	p->score = 80; //指针通过 -> 操作符可以访问成员
//
//	cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
//
//	system("pause");
//
//	return 0;
//}


// P68 结构体-结构体嵌套结构体

// P69 结构体-结构体做函数参数

//// P70 结构体案列1-------------------------------------------------------------------------
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
//		cout << "老师的名字" << tArray[i].tName << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生的名字" << tArray[i].stu[j].sName << "学生的成绩： " << tArray[i].stu[j].score << endl;
//		}
//	}
//}
//
// 
//int main()
//{
//	//随机数种子
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



//// P71 结构体案列2------------------------------------------------------------------
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
//	cout << "排序后的结果：" << endl;
//	for (int i = 0; i < len; i++)
//	{
//		cout << "姓名： " << heroArray[i].name << " 性别： " << heroArray[i].sex 
//			<< " 年龄： " << heroArray[i].age << endl;
//	}
//}
//
//int main()
//{
//	struct hero heroArray[5] =
//	{
//		{"刘备",23,"男"},
//		{"关羽",22,"男"},
//		{"张飞",20,"男"},
//		{"赵云",21,"男"},
//		{"貂蝉",19,"女"},
//	};
//
//	int len = sizeof(heroArray) / sizeof(heroArray[0]);
//	cout << " 排序前的结果：" << endl;
//	for (int i = 0; i < len; i++)
//	{
//		cout << "姓名： " << heroArray[i].name << " 性别： " << heroArray[i].sex
//			<< " 年龄： " << heroArray[i].age << endl;
//	}
//	bubbleSort(heroArray,len);
//	printInfo(heroArray,len);
//
//	system("pause");
//	return 0;
//}