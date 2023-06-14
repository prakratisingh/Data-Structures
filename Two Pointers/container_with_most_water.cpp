//ques link: https://leetcode.com/problems/container-with-most-water/?envType=study-plan-v2&envId=top-interview-150
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int water_area = 0;
        int i=0, j=height.size()-1;
        while(i<j)
        {
            int h = min(height[i],height[j]);
            water_area = max(water_area, (j-i)*h);
            while(height[i]<=h && i<j) i++;
            while(height[j]<=h && i<j) j--;
        }
        return water_area;
    }
};