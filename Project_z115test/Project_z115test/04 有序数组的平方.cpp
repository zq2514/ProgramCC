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
#include <algorithm>

void printT(int val)
{
    cout << val << " ";
}

//class Solution {
//public:
//    void sortedSquares(vector<int>& nums) {
//        vector<int> temp;
//        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
//        {
//            int num = (*it) * (*it);
//            temp.push_back(num);
//        }
//        sort(temp.begin(),temp.end());
//        for_each(temp.begin(), temp.end(), printT);
//    }
//};


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>result;
        int k =nums.size()-1;
        int i, j=k;
        for (int i = 0; i < j;)
        {
            if (nums[i]*nums[i] >= nums[j]*nums[j])
            {
                result[k--] = nums[i] * nums[i];
                i++;
            }
            else
            {
                result[k--] = nums[j] * nums[j];
                j--;
            }
        }
        return result;
        

    }
};


int main()
{
    vector<int> v;
    /*输入：nums = [-4,-1,0,3,10]
输出：[0,1,9,16,100]
解释：平方后，数组变为 [16,1,0,9,100]
排序后，数组变为 [0,1,9,16,100]*/

    v.push_back(-4);
    v.push_back(-1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(10);


    Solution s1;
    vector<int> result = s1.sortedSquares(v);

    for (vector<int>::iterator it = result.begin(); it != result.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}