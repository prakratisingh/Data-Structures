//ques link: https://leetcode.com/problems/contains-duplicate-ii/?envType=study-plan-v2&envId=top-interview-150
#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_map<int, size_t> map;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (map.count(nums[i]))
            {
                if (i - map[nums[i]] <= k)
                    return true;
            }
            map[nums[i]] = i;
        }
        return false;
    }
};