#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int tuna = '+';  

	if( isalpha(tuna) ) {
		if( isupper(tuna) ) {
			printf("%c is uppercase \n", tuna);
		}
		else if( islower(tuna) ) {
			printf("%c is lowercase \n", tuna);
		}
	}
	else if( isdigit(tuna) ) {
		printf("%c is a number \n", tuna);
	}
	else {
		printf("%c is a spetial charecter \n", tuna);
	}

	return 0;
}
