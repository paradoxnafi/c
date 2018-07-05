// Fibonacci number.

#include <stdio.h>

int main()
{
	unsigned long int i, m, t1, t2, next_t;
	i = 1;
	t1 = 1;
	t2 = 1;

	printf("How many Fibonacci number to print: ");
	scanf(" %lu", &m);

	do {
		printf("%lu ", t1);
		next_t = t1 + t2;
		t1 = t2;
		t2 = next_t;

		i++;
	} while(i <= m);
	printf("\n");

	return 0;
}