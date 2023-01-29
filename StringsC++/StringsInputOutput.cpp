#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str; //simplest way to declare
    cin>>str;
    cout<<str<<endl;
    //if you want one character a certain number of times.
    string str1(5,'a');
    cin>>str;
    cout<<str;
    cout<<str1<<endl;
    //if you want to store something without spaces.
    string str3 = "HelloWorld";
    cout<<str3<<endl;
    //if you want to take input a sentence.
    string str4;
    getline(cin,str4);
    cout<<str4<<endl;
    return 0;
}