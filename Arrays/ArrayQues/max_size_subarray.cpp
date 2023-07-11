//ques link: https://leetcode.com/problems/minimum-size-subarray-sum/?envType=study-plan-v2&envId=top-interview-150
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int l=0,r=0,res=INT_MAX,s=0;
        for(r=0;r<nums.size();r++)
        {
              s+=nums[r];
              while(s>=target)
              {
                  s-=nums[l];
                  res = min(res,r-l+1);
                  l++;
              }
        }
        if(res==INT_MAX)
        return 0;
        return res;
    }
};