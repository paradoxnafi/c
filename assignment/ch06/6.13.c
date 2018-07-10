// A serige e = 1 + 1/1! + 1/2! + ...... + 1/n!

#include <stdio.h>

int main() 
{
	float e = 1;
	float fact = 1, n;
	int i;

	printf("Enter a number: ");
	scanf("%f", &n);

	for(i = 1; i <= n; i++) {
		fact *= (float)i;
		e += 1/fact;
	}

	printf("e = %f\n", e);

	return 0;
}