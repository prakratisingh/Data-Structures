//ques link: https://leetcode.com/problems/longest-mountain-in-array/submissions/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestMountain(vector<int>& arr) 
    {
        int n = arr.size();
        int maxl = 0;
        int count;
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
            {
                count = 1;
                int j=i;
                while(j>0 && arr[j]>arr[j-1])
                {
                    j--;
                    count++;
                }
                j=i;
                while(j+1<n && arr[j]>arr[j+1])
                {
                    j++;
                    count++;
                }
                maxl = max(count, maxl);
            }
        }
        return maxl;
    }
};