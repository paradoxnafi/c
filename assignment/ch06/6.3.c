// Takes an input number and counts it's digits.

#include <stdio.h>

int main()
{
	long int num, backup;
	int count = 0;

	printf("Enter any number: ");
	scanf(" %ld", &num);
	backup = num;

	while(num != 0) {
		num /= 10;
		count++;
	}

	printf("There are %d digits in %ld \n", count, backup);

	return 0;
}