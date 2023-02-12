#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}
void arrange(int arr[],int n)
{
    int low = 0,high = n-1;
    while(low<high)
    {
        // cout<<"hello"<<endl;
        if(arr[low]<0)
        {
            low++;
        }
        else if(arr[high]>-1)
        {
            high--;
        }
        else
        {
            swap(&arr[low],&arr[high]);
            low++;
            high--;
        }
    }
}
void Display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {1,2,-4,-5,2,3,-6,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    Display(arr,n);
    arrange(arr,n);
    Display(arr,n);
    return 0;
}