#include <stdio.h>

int main()
{
	int i, j, lim;

	printf("Enter a number: ");
	scanf(" %d", &lim);

	for(i = 1;/* i <= lim*/; i++) {
		for(j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}