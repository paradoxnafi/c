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
	} 
	if(input == 0) {
		output = 0;
	} 
	if(input > 0) {
		output = 1;
	} 	

	printf("%d \n", output);

	return 0;
}