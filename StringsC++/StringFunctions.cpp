//Lets discuss some basic functions of strings.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //1. append - to append a string we have two ways: append function and + operator.
    string str1 = "fam";
    string str2 = "ily";
    // str1.append(str2);
    // cout<<str1<<endl;
    cout<<str1+str2<<endl;

    //2. to access a character from the string treat it as an array.
    cout<<str2[2]<<endl; 

    //3. clear - removes the content of the string.
    string st2 = "abhdg";
    st2.clear();
    cout<<st2<<endl;

    //4. compare - compare to is used to compare two strings. If it returns positive value then
    //string is bigger, if negative second string is bigger, if 0 strings are equal. 
    string s1 = "abc";
    string s2 = "xyz";
    cout<<s2.compare(s1)<<endl;
    if(s1.compare(s2)==0) //if(!s1.compare(s2))
    {
        cout<<"Strings are equal"<<endl;
    }
    else
    {
        cout<<"Strings are unequal"<<endl;
    }

    //5. check if string is empty.
    s1.clear();
    if(s1.empty())
    {
        cout<<"Empty String"<<endl;
    }

    //6. erase a certain number of characters.
    string ss = "hellloooo";
    ss.erase(3,4);
    cout<<ss<<endl;

    //7. find() - tells if a substring is present in the string. If yes, returns first index where 
    //the substring begins. If not, returns garbage value.
    string s22 = "hellloooo";
    cout<< s22.find("llll")<< endl;

    //8.insert(pos,string) - helps insert a certain string at desired place.
    s22.insert(4,"joke");
    cout<< s22 <<endl;

    //9.length() - finds length of string.
    cout<< s22.length() << endl;

    //10. substr(start index, no of characters) - returns a part of the string.
    cout<<s22.substr(4,4)<<endl;

    //11. string to integer = stoi(str) converts numerical string to intger form.
    string s3 = "6778";
    int x = stoi(s3);
    cout<<x<<endl;

    //12. integer to string - to_string(int) converts int to string.
    int y = 455;
    string sw = to_string(y);
    cout<<sw<<endl;

    //13. sort a string lexicographically.
    string stw = "mndjgfszkhjfia";
    sort(stw.begin(),stw.end());
    cout<<stw<<endl;
    return 0;  
}