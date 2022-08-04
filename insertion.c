#include <stdio.h>  
int main()  
{  
    int arr[20] = { 6, 5, 15, 70, 2 };  
    int i, ele, pos, n = 5;  
    printf("Array elements before insertion\n");  
    for (i = 0; i < n; i++)  
    printf("%d\n", arr[i]);  
    ele = 50; // element to be inserted  
    pos = 4;  
    n++;  
    for (i = n-1; i >= pos; i--)  
    arr[i] = arr[i - 1];  
    arr[pos - 1] = ele;  
    printf("Array elements after insertion\n");  
    for (i = 0; i < n; i++)  
        printf("%d\n", arr[i]);  
    printf("\n");  
    return 0;  
}  