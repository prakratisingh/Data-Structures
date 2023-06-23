//ques link: https://leetcode.com/problems/ransom-note/?envType=study-plan-v2&envId=top-interview-150
#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        map<char,int> map;
        for (int i=0;i<magazine.length();i++)
        {
            map[magazine[i]]++;
        }

        for(int i=0;i<ransomNote.length();i++)
        {
            if(map[ransomNote[i]]>0)
                map[ransomNote[i]]--;
                else
                    return false;
        }

        return true;
    }
};