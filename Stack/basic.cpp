#include<stdio.h>
#include<iostream>
using namespace std;
class Stack{

    //properties
    public:
    int *arr;
    int top;
    int size;

    //behavior
    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
    //complexity = O(1)
    void push(int element){
        if(size-top>1)
        {
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack overflow"<< endl;
        }
    }
    //complexity = O(1)
    void pop(){
        if(top>=0)
        {
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    //complexity = O(1)
    int peek(){
        if(top>=0 && top<size)
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack is Empty"<<endl;
        }
    }
    //complexity = O(1)
    bool isEmpty(){
        if(top==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    Stack st(5);
    st.push(50);
    st.push(44);
    st.push(90);

    st.pop();
    
    cout<<st.peek()<<endl;
    
    // cout<<st.isEmpty()<<endl;
    // st.pop();
    // st.pop();
    // cout<<st.isEmpty()<<endl;
        if(st.isEmpty())
    {
        cout<<"Stack empty"<<endl;
    }
    else{
        cout<<"Stack not empty"<<endl;
    }
}