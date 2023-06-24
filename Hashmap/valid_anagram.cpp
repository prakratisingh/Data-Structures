//ques link: https://leetcode.com/problems/valid-anagram/?envType=study-plan-v2&envId=top-interview-150
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length()!=t.length())
        {
            return false;
        }
        int arr[26] = {0};

        for(int i=0;i<s.length();i++)
        {
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
};