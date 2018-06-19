//This code has bug. Fix it letter.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
	int check = '#';

	if( isalpha(check) ) {
		printf("%c is a letter \n", check);
	} 
	else if( isdigit(check) ){
		printf("%c is a letter \n", check);
	}
	else {
		printf("%c is a spetial charectar \n", check);
	} 

	return 0;

}