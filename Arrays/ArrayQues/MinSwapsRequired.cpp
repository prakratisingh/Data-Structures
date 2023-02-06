//Ques link: https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1

#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        int c = 0;
        for(int i=0;i<n;i++)
        {
            if (arr[i]<=k)
            {
                c++;
            }
        }
        int curr = 0;
        for(int i=0;i<c;i++)
        {
            if(arr[i]<=k)
            {
                curr++;
            }
        }
        int ans = c-curr;
        for(int i=c;i<n;i++)
        {
            if(arr[i-c]<=k)
            {
                curr--;
            }
            if(arr[i]<=k)
            {
                curr++;
            }
            ans = min(c - curr,ans);
        }
        return ans;
    }
};