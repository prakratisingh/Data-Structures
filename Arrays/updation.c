#include<stdio.h>
int main()
{
    int A[5]={12,2,3,44,6};
    int i,item,pos,n=5;
    printf("Enter element to be added: \n");
    scanf("%d",&item);
    printf("Enter position at which element has to be added: \n");
    scanf("%d",&pos);
    A[pos-1] = item;
    printf("Array after updation: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
}