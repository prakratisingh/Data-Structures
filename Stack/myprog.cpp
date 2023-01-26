#include <bits/stdc++.h>
#include <stack>
using namespace std;
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        char ch = s[i];
        if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/')
        {
            st.push(ch);
        }
        else
        {
            if(ch==')')
            {
                bool redun = true;
                while(st.top()!=')')
                {
                    char top = st.top();
                    if(!st.empty() && (top=='+'||top=='-'||top=='*'||top=='/'))
                    {
                        redun = false;
                    }
                     st.pop();
                }
                if(redun==true)
                    return true;
               st.pop();
            }
        }
    }
    return false;
}

/*
((a+b))





*/