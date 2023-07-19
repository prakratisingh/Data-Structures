#include <bits/stdc++.h>
/*
%u = It is a format specifier that is used to print an unsigned integer value using the printf() or scanf() functions

printf("%u", &i) -> will print address of i
printf("%d", i) -> will print value of i
printf("%d",*(&i)) -> will print the value of i

To store the address of a variable in another variable the other variable should be of pointer type.
int *j = &i;
'*' -> stands for value at address
int *j -> value at the address contained in j is an integer OR j is the pointer to an integer variable.
*/
/*
int main()
{
    int i = 3;
    int *j = &i;

    printf("%i\n", &i); //address of i
    printf("%i\n", i); //value of i -> 3
    printf("%i\n", &j); //address of j
    printf("%i\n", j); //value at j -> address of i
    printf("%i\n", *(&i)); //value of i -> 3
    printf("%i\n", *j); // value which j is pointing to -> 3
    printf("%i", &j); // address of j

}
** Since address are always whole nos hence pointers always store whole nos..**
*/

/*
POINTER TO A POINTER

main()
{
    int i = 3;
    int *j;
    int **k;

    j = &i;
    k = &j;

    printf("%i\n", &i); //address of i
    printf("%i\n", i); //value at i
    printf("%i\n", &j); //address of j
    printf("%i\n", j); //value at j -> add of i
    printf("%i\n", &k); //address of k
    printf("%i\n", k); //value at k -> address of j
    printf("%i\n", *j); //value which j is pointing to -> 3
    printf("%i\n", *k); //value which k is pointing to -> add of j
    printf("%i\n", **k); //value of i
    printf("%i\n", *(&i)); //value of i
}
*/

// main()
// {
//     int a = 35;
//     int *b;
//     b = &a;

//     -- b contains address of an int
//     -- b is an int pointer
//     -- value at address contained in b is an int
//     -- b points to an int
//     -- b is a pointer which points to the direction of an int
// }

/*
POINTER TO char, float, int
int main()
{
    int a = 10;
    float b = 12.77;
    char c = 'A';

    int *aa;
    float *bb;
    char *cc;

    aa = &a;
    bb = &b;
    cc = &c;

    printf("%u\n",aa); //value at aa->address of a
    printf("%u\n",bb); //value at bb->address of b
    printf("%u\n",cc); //value at cc->address of c
    printf("%d\n",*aa); //value aa is pointing to -> a ki value
    printf("%f\n",*bb); //value bb is pointing to -> b ki value
    printf("%c\n",*cc); //value cc is pointing to -> c ki value
}
** the format specifier %u is used -> since address can be number larger than 32767
** if the address is smaller , int can also be used..
++NOTE++
-- Although a stores 2 bytes, the pointer points to the location of the first byte only..
-- Out of however many bytes, only the address of first byte is stored in the pointer.
*/

/*
What if I store value of pointer of one data type in another data type
main()
{
    int a = 40;
    float f = 14.33;

    char *aa,*ff; //char pointers will only contain one byte hence will give value at first address
    aa = (char*) &a;
    ff = (char*) &f;
    printf("%u\n", aa);
    printf("%u\n",ff);
    printf("%u\n",*aa);
    printf("%u\n",*ff);
}
*/
// --When we pass the address of the variable any change that is done to the variables in the functions will be affected in the main as well.4
// Pass by reference
// but if value is passed it will be chnaged in the function but won't be reflected back.
// This is called pass by value.

/*
FUNCTION RETURNING POINTERS
*/
/*
static int i = 20;
main()
{
    int *p;
    int *fun(); //prototype
    p = fun();
    printf("%u\n",p);
    printf("%u\n",*p);
}
int *fun()
{
    // int i = 20;
    return(&i); //address of local variable will already be dead outside this function hence no o/p..
}
//if we want i to be accessible outside and *p to have its value it should be declared outside scope of function using 'static'.
*/
