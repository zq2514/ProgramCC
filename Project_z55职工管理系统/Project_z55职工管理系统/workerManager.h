// ��ͷ�ļ���ֻ������ ���� ʵ��
#pragma once  // ��ֹͷ�ļ��ظ�����
#include<iostream> // ���������������ͷ�ļ�
using namespace std; // ʹ�ñ�׼�����ռ䣬out��cout��in�ȹؼ����� ��������������������
#include"worker.h"
#include<fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	// ���캯��
	WorkerManager();
	// ��������showMenu();  ��cpp�ļ���ʵ��showMenu
	void ShowMenu();

	//  ���� �˳��������ӿڣ�
	void ExitSystem();

	// ���Ա����ʵ��
	void AddEmp();

	// ����Ա����Ϣ
	void Save();

	//�ж��ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	// ͳ������
	int get_EmpNum();

	// ��ʼ��Ա��
	void init_Emp();

	// ��ʾְ��
	void Show_Emp();

	// ɾ��ְ����
// 4.1 ɾ��ְ��ǰ���жϣ��ó�Ա�Ƿ���ڣ�
	int IsExist(int id);

	void Del_Emp();

	// �޸�ְ��
	void Mod_Emp();

	// ����ְ��
	void Find_Emp();

	// ְ������
	void Sort_Emp();

	// ��պ���
	void Clean_File();
	
	// ��������
	~WorkerManager();

	 
public :
	int m_EmpNum;   // ��¼�ܱ��е�Ա������
	Worker** m_EmpArray;  //ְ������ָ��
};