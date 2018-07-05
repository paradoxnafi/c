#include <stdio.h>

int main()
{
	int n, store[100], i, num, count, backup;
	count = 0;

	printf("Enter any number: ");
	scanf(" %d", &num);
	backup = num;

	for(i = 0; num > 0; i++) {
		store[i] = num % 10;
		num /= 10;
		count++;
	}

	for(i = 0; i < count; i++) {
		printf("%d", store[i]);
	}

	printf("\n");

	return 0;
}