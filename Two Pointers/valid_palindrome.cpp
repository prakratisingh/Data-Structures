//ques link: https://leetcode.com/problems/valid-palindrome/?envType=study-plan-v2&envId=top-interview-150
#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    bool isPalindrome(string s) 
    {
        int n=s.size(),l=0,r=n-1;
        while(l<r)
        {
            while(l<r && !isalnum(s[l]))
            {
                l++;
            }
            while(l<r && !isalnum(s[r]))
            {
                r--;
            }
            if(tolower(s[l++]) != tolower(s[r--]))
            {
                return false;
            }
        }
        return true;
    }
};