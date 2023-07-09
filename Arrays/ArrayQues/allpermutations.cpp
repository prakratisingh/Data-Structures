//using stl
#include<bits/stdc++.h>
using namespace std;
void display(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}
void find_perm(int a[],int n)
{
    sort(a,a+n);
    do{
        display(a,n);
    }
    while
        (next_permutation(a,a+n));
}
int main()
{
    //array to be passed
    int a[] = {10, 20, 30, 40};
    int n = sizeof(a)/sizeof(a[0]);
    find_perm(a,n);
    return 0;
}