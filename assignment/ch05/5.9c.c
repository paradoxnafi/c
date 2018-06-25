// Md. Nafi Shahriyar
// ID: 18103346

#include <stdio.h>


int main()
{
	int input, output;

	printf("Enter a number: ");
	scanf(" %d", &input);

	(input < 0) ? output = -1 : (input == 0) ? output = 0 : (output = 1); 	

	printf("%d \n", output);

	return 0;
}