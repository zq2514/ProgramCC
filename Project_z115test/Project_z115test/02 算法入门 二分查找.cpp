//#include<iostream> 
//using namespace std;
//#include <vector>
//
//
//int main()
//{
//
//    system("pause");
//    return 0;
//}


#include<iostream> 
using namespace std;
#include <vector>

void test01()
{
    int nums[] = { -1, 0, 3, 5, 9, 12 };
    int target = 0;
    int status = 0;
    cout << "������Ҫ��ѯ�����ݣ�" << endl;
    cin >> target;

    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        if (nums[i] == target)
        {
            status = 1;
            cout << "Ԫ�ش��ڣ��±�Ϊ��" << i << endl;
        }
    }
    if (status == 0)
    {
        cout << "-1" << endl;
    }
}

//class Solution 
//{
//public:
//    int search(vector<int>& nums, int target)
//    {
//        cout << "��������ҵ���" << endl;
//        cin >> target;
//        int index = 0;
//        int status = 0;
//        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++,index++)
//        {
//            if (*it == target)
//            {
//                status = 1;
//                return index;
//            }
//        }
//        if (status == 0)
//        {
//            status = -1;
//            return status;
//        }
//    }
//};
//
//void test02()
//{
//    vector<int> v;
//    v.push_back(-1);
//    v.push_back(0);
//    v.push_back(3);
//    v.push_back(5);
//    v.push_back(9);
//    v.push_back(12);
//    Solution s1;
//    int target = 0;
//    int ret = s1.search(v,target);
//    cout <<  ret << endl;
//}

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = (right - left) / 2 + left;
            int num = nums[mid];
            if (num == target) {
                return mid;
            }
            else if (num > target) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        return -1;
    }
};

//���ߣ����۹ٷ����
//���ӣ�https ://leetcode.cn/problems/binary-search/solutions/980494/er-fen-cha-zhao-by-leetcode-solution-f0xw/
//��Դ�����ۣ�LeetCode��
//����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������

int main()
{
    //test01();
    //test02();

    //test03();
    vector<int> v;
    v.push_back(-1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(5);
    v.push_back(9);
    v.push_back(12);
    Solution s1;

    cout << "������Ҫ���ҵ�����" << endl;
    int target = 0;
    cin >> target;
    
    int ret = s1.search(v,target);

    if (ret != -1)
    {
        cout << "���ڣ�";
        cout << ret << endl;
    }
    else {
        cout << ret << endl;
    }

    system("pause");
    return 0;
}