// In a programming contest, I was told that 1 <= T <= 1000; My code will run this number of times.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int T;
int main()
{
    for(T = 1; T <= 100; T++) {
    	int a, b;    	
    	printf("Enter two numbers: ");
    	scanf("%d %d", &a, &b);
    	a += b;
    	printf("Sum = %d\n", a);

    }
	return 0;
}