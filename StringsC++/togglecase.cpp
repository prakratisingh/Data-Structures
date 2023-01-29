#include<bits/stdc++.h>
using namespace std;
string togglecase(string s1)
{
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]>='a'&&s1[i]<='z')
        {
            s1[i] = toupper(s1[i]);
        }
        else if(s1[i]>='A'&&s1[i]<='Z')
        {
            s1[i] = tolower(s1[i]);
        }
    }
    return s1;
}    
int main()
{
    string str;
    cin>>str;
    string out="";
    out = togglecase(str);
    cout<<out<<endl;
}