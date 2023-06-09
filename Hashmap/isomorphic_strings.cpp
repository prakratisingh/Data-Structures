//https://leetcode.com/problems/isomorphic-strings/?envType=study-plan-v2&envId=top-interview-150
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        int length = s.length();
        int m1[256], m2[256];
        for(int i=0;i<256;i++)
        {
            m1[i]=m2[i] = -1;
        }

        for(int i=0;i<length;i++)
        {
            if(m1[s[i]] != m2[t[i]]) return false;
            m1[s[i]] = m2[t[i]] = i;
        }
        return true;
    }
};