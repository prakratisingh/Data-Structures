#include<stdio.h>
void foo (char *a)
{
foo(a+1);
putchar(*a);
}
foo(5);