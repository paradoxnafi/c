// Md. Nafi Shahriyar
// ID: 18103346

#include <stdio.h>

int main()
{
	int input, output;

	printf("Enter a number: ");
	scanf(" %d", &input);

	if(input < 0) {
		output = -1;
	} else if(input == 0) {
		output = 0;
	} else {
		output = 1;
	} 	

	printf("%d \n", output);

	return 0;
}