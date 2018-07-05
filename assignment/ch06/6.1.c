// Get an input number from user and print it in reverse order.

#include <stdio.h>

int main()
{
	int n, store[100], i, num, count;
	count = 0;

	printf("Enter any number: ");
	scanf(" %d", &num);

	for(i = 0; num > 0; i++) {
		store[i] = num % 10;
		num /= 10;
		count++;
	}

	i = 0;
	while(i < count) {
		printf("%d", store[i]);
		i++;
	}

	printf("\n");

	return 0;
}