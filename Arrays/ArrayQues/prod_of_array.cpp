//ques link: https://leetcode.com/problems/product-of-array-except-self/?envType=study-plan-v2&envId=top-interview-150
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> out(n);
        out[0] = 1;
        for(int i=1;i<n;i++)
        {
            out[i] = out[i-1]*nums[i-1];
        }
        int r = 1;
        for(int i=n-2;i>=0;--i)
        {
            r*=nums[i+1];
            out[i]*=r;
        }
        return out;
    }
};