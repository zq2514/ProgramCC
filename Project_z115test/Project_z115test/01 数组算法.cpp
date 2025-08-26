#include<iostream> 
using namespace std;
#include <vector>

class Solution
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i = 0;
        for (int x : nums)
        {
            if (x != nums[i])
            {
                nums[++i] = x;
            }
        }
            
        return i + 1;
    }
};

void test03()
{
    int a[] = { 1, 2, 2, 2, 3, 4, 4, 5, 1, 5,6,6,7,8 };
    int n = 0, i, j, c, k;
    for (i = 0; i < sizeof(a)/sizeof(a[0]) - n; i++)
    {
        c = a[i]; //数组第一个数

        for (j = i + 1; j < sizeof(a) / sizeof(a[0]) - n; j++) // 数组第二个数
            if (a[j] == c) 
            {
                for (k = j; k < sizeof(a) / sizeof(a[0]) - n; k++)
                {
                    a[k] = a[k + 1];
                }                   
                n++;
                j--;
            }
    }
    for (i = 0; i < sizeof(a) / sizeof(a[0]) - n; i++)
    {
        cout << a[i] << " ";
    }        
    cout << endl;
 }


int main()
{
   
    Solution s1;
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);

    s1.removeDuplicates(v);

    for(vector<int>::iterator it = v.begin();it!=v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    //test03();


	system("pause");
	return 0;
}