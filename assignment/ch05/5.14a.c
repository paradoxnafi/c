#include <stdio.h>

int main()
{
	int input;

	printf("Enter a number: ");
	scanf("%d", &input);
	prime(input);

	return 0;
}

int prime(int input)
{
	int i;
	
	for(i = 2; i < input; i++) {
		if(input % i == 0) {
			printf("%d is not a prime number. \n", input);
			return 0;
		}
	} 
		
	printf("%d is a prime number. \n", input);
	return 0;
}