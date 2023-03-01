//ques link: https://leetcode.com/problems/majority-element/?envType=study-plan-v2&envId=top-interview-150
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int i;int candidate = -1,votes=0;
        for (i=0;i<nums.size();i++)
        {
            if (votes==0)
            {
                candidate = nums[i];
                votes=1;
            }
            else{
                if (candidate==nums[i])
                    votes++;
                else
                    votes--;
            }
        }
        int count=0;
        for (i=0;i<nums.size();i++)
        {
            if(nums[i]==candidate)
            {
                count++;
            }
        }
        int n =nums.size();
        if (count>n/2)
            return candidate;
        return -1;
    }
};