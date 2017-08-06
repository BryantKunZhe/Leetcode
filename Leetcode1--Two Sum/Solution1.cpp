#include<iostream>
#include<vector>
using namespace std ;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> result;
    int N = nums.size();
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
        return result;
}

int main()
{
    int a[] = {3,2,4};
    vector<int> nums(a, a+3);
    int index = 0;
    for(index = 0;index<nums.size();index++)
        cout<<nums[index]<<" ";
    int target = 6;
    vector<int> r;
    r = twoSum(nums,target);
    cout<<r[0]<<" ";
    cout<<r[1]<<" ";

    return 0 ;
}


