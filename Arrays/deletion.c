#include<stdio.h>
int main()
{
    int A[5] = {5,7,12,18,6};
    int n=5;
    printf("Array elements before deletion\n");
    for (int i = 0; i < n; i++)  
    printf("%d\n", A[i]);  
    int ele = 18;
    int j = ele;
    while(j<n)
    {
        A[j-1]=A[j];
        j++;
    }
    n=n-1;
    printf("Array elements after deletion\n");
    for (int i = 0; i < n; i++)  
    printf("%d\n", A[i]); 
}