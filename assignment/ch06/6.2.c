// Factorial of a number

#include<stdio.h>

int main()
{
    long unsigned a,fac = 1;

    printf("Enter a number(max 32) : ");
    scanf("%lu", &a);

    int num = a;

    while(a > 0) {
        fac *= a;
        a--;
    } 

    printf("Factorial of %d is = %lu\n", num, fac);

    return 0;
}