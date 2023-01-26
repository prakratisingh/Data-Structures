#include<bits/stdc++.h>
using namespace std;
    queue<int> q1;
    queue<int> q2;

void push(int x)
{
    q1.push(x);
    while(!q2.empty())
    {
        q1.push(q2.front());
        q2.pop();
    }
    swap(q1,q2);
}
int pop()
{
    if(q2.empty()==true)
    {
        return -1;
    }
    int ans;
        ans = q2.front();
        q2.pop();
    return ans;
}
void display()
{
    while(!q2.empty())
    {
        cout<<q2.front()<<endl;
        q2.pop();
    }
}
int main()
{
    push(10);
    push(30);
    push(65);
    // display();
    pop();
    display();
}