//follows LIFO - whichever element is inserted last will be popped 
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    //creation of stack
    stack<int> s;

    //pushing an element 
    s.push(10);
    s.push(9);
    //popping
    s.pop();
    //top of stack
    cout<<"Top element: "<<s.top()<<endl;

    //checking if stack is empty
    if(s.empty())
    {
        cout<<"Stack is empty.."<<endl;
    }
    else
    cout<<"Stack is not empty..."<<endl;
}