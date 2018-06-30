#include <stdio.h>
#include <math.h>

long int T = 1;

int main()
{
	long int input, i, lim;

	printf("How many times do you want this program to run: ");
	scanf(" %ld", &lim);

	restart:	// On condition1 and condition2, program will restart from here.
	if(T == lim+1) {
		return 0;
	}

	while(T <= lim) {		
		printf("\n%ld. Enter a number: ", T);
		scanf(" %ld", &input);

		T++;

		long int sqrt_input = sqrt(input);

		if(input > 0) {
			for(i = 1; i <= sqrt_input; i++) {
				if(input % i == 0) {
					printf("\t%ld is not a prime number. \n", input);
					goto restart;	//condition1 to restart
				}
			}
		} else if(input <= 0) {
			printf("You must enter a positive number. \n");
			goto restart;	//condition2 to restart
		}
	}

	printf("%ld is a prie number \n", input);

	return 0; 
}
