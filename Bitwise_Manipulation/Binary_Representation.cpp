//Ques link = https://practice.geeksforgeeks.org/problems/binary-representation5003/1
#include<bits/stdc++.h>
using namespacestd;
class Solution
{
public:
    string getBinaryRep(int N)
    {
        // Write Your Code here
        string res;
        while(N!=0)
        {
            res=to_string(N%2)+res;
            if(N==1)
            {
                break;
            }
            N=N/2;
        }
        string s;
        for(int i=1;i<=30-res.length();i++)
        {
            s+="0";
        }
        return s+res;
    }
};