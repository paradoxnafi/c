// Some shapes with S

#include <stdio.h>

int main() 
{
	int i, j;

	for(i = 1; i <= 6; i++) {
		for(j = 1; j <= 6; j++) {
			if( (i == 1) || (i == 6) ) {
				printf("S ");
			}
		}

		if(i == 2) {
			printf("\n");
		}

		if( (i != 1) && (i != 6) ) {
			printf("S         S");
			printf("\n");
		}
	}

	printf("\n");

	return 0;
}