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


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1, ans = n;
        while (left <= right) {
            int mid = ((right - left) >> 1) + left;
            if (target <= nums[mid]) {
                ans = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        return ans;
    }
};

//���ߣ����۹ٷ����
//���ӣ�https ://leetcode.cn/problems/search-insert-position/solutions/333632/sou-suo-cha-ru-wei-zhi-by-leetcode-solution/
//��Դ�����ۣ�LeetCode��
//����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������

//���ߣ����۹ٷ����
//���ӣ�https ://leetcode.cn/problems/first-bad-version/solutions/824522/di-yi-ge-cuo-wu-de-ban-ben-by-leetcode-s-pf8h/
//��Դ�����ۣ�LeetCode��
//����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������



int main()
{
    int a = 5;
    int b = 2;
    int c = a / b;
    cout << c << endl;
    system("pause");
    return 0;
}
