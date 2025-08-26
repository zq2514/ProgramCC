// 在头文件中只做声明 不做 实现
#pragma once  // 防止头文件重复包含
#include<iostream> // 包含输入输出流的头文件
using namespace std; // 使用标准命名空间，out，cout，in等关键字嘛 输出流对象，输入流对象等
#include"worker.h"
#include<fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	// 构造函数
	WorkerManager();
	// 这里声明showMenu();  在cpp文件中实现showMenu
	void ShowMenu();

	//  声明 退出函数（接口）
	void ExitSystem();

	// 添加员工的实现
	void AddEmp();

	// 保存员工信息
	void Save();

	//判断文件是否为空
	bool m_FileIsEmpty;

	// 统计人数
	int get_EmpNum();

	// 初始化员工
	void init_Emp();

	// 显示职工
	void Show_Emp();

	// 删除职工：
// 4.1 删除职工前做判断，该成员是否存在：
	int IsExist(int id);

	void Del_Emp();

	// 修改职工
	void Mod_Emp();

	// 查找职工
	void Find_Emp();

	// 职工排序
	void Sort_Emp();

	// 清空函数
	void Clean_File();
	
	// 析构函数
	~WorkerManager();

	 
public :
	int m_EmpNum;   // 记录总表中的员工数量
	Worker** m_EmpArray;  //职工数组指针
};