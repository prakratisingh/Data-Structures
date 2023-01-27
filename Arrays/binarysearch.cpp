//Time complexity = O(log n)
#include<bits/stdc++.h>
using namespace std;
int BinSearch(int arr[],int n,int key)
{
    int s = 0;
    int e = n;

    while(s<n)
    {
        int mid = (s+e)/2;
        if(key==arr[mid])
        {
            return mid;
        }
        else if(key<arr[mid])
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;

    cout<<BinSearch(arr,n,key)<<endl;
return 0;
}