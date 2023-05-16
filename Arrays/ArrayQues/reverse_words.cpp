//https://leetcode.com/problems/reverse-words-in-a-string/?envType=study-plan-v2&envId=top-interview-150
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) 
    {
        string word,ot;
        stringstream ss(s);

        while(ss>>word)
        {
            ot = word+" "+ot;
        }   

        return ot.substr(0, ot.length()-1);
    }
};