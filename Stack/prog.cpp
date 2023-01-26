#include <bits/stdc++.h>
#include <string>
using namespace std;
bool findRedundantBrackets(string &str)
{
    stack<char> s;
    bool flag = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
            s.push(str[i]);
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            if (!s.empty() && (s.top() == '+' || s.top() == '-' || s.top() == '*' || s.top() == '/'))
                s.pop();
            s.push(str[i]);
        }
        else if (str[i] == ')')
        {
            if (!s.empty() && (s.top() == '+' || s.top() == '-' || s.top() == '*' || s.top() == '/'))
            {
                s.pop();
                if (!s.empty() && s.top() == '(')
                    s.pop();
            }
            else
            {
                flag = true;
            }
        }
    }
    return flag;
}
//((a+b))

/*
(
*/