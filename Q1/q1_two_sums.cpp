/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
*/

#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int sum;
        vector<int> ind;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                sum = nums[i]+nums[j];
                if(sum==target)
                {
                    ind.push_back(i);
                    ind.push_back(j);
                    goto label;
                }
            }
        }
        label:
        return ind;
    }
};
int main()
{
    vector <int> v;
    int i=0;
    int a;
    int tar;
    cin>>tar;
    while(cin>>a)
    {
        v.push_back(a);
        i++;
    }
    vector <int> ans;
    Solution s;
    ans = s.twoSum(v,tar);
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}