#include<stdio.h>
int main()
{
    int r,c,p,k,ele;
    printf("Enter no of rows: \n");
    scanf("%d",&r);
    printf("Enter no of columns: \n");
    scanf("%d",&c);
    int A[r][c];
    for(int i=0;i<r;i++)
    {
        printf("\n");
         for(int j=0;j<c;j++)
        {
            printf("Enter element  :  %d%d\n",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter position of element to be updated: \n");
    scanf("%d%d",&p,&k);
    printf("Enter new element: \n");
    scanf("%d",&ele);
    A[p][k] = ele;
    printf("Printing updated elements of array: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }
}