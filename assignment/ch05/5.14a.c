// Md. Nafi Shahriyar
// ID: 18103346

#include <stdio.h>

int main()
{
	int input, i;
	
	printf("Enter a number: ");
	scanf(" %d", &input);

	for(i = 2; i < input; i++) {
		if(input % i == 0) {
			printf("%d is not a prime number. \n", input);
			return 0;
		}
	} 
		
	printf("%d is a prime number. \n", input);
	return 0;
}