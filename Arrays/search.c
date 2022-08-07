#include<stdio.h>
int main()
{
    int A[5]= {4,2,12,66,8};
    int i=0,n,item;
    printf("Enter item to be searched: \n");
    scanf("%d",&item);
    while(i<5)
    {
        if(A[i]==item)
        {
        break;
        }
    i++;
    }
    printf("Element found at : %d",i+1);
}