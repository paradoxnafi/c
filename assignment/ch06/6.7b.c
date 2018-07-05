#include <stdio.h>

int main()
{
	int i, j, lim;

	printf("Enter a number: ");
	scanf(" %d", &lim);

	for(i = lim; i >= 1; i--) {
		for(j = i; j >= 1; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}