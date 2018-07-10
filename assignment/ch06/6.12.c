// Printing S where row is 15 and column is 18

#include <stdio.h>

int main()
{
	int i, j, k;
	j = 1;

	for(i=1;i<=3;i++) {
		for(j=1;j<=18;j++) {
			printf("*");

			if(j==18) {
				printf("\n");
			}
		}
	}

	for(i=1;i<=3;i++) {
		for(j=1;j<=4;j++) {
			printf("*");

			if(j==4) {
				printf("\n");
			}
		}
	}

	for(i=1;i<=3;i++) {
		for(j=1;j<=18;j++) {
			printf("*");

			if(j==18) {
				printf("\n");
			}
		}
	}

	for(i=1;i<=3;i++) {
		for(k=1;k<=14;k++) {
			printf(" ");
		}

	for(j=15;j<=18;j++) {
		printf("*");

		if(j==18) {
			printf("\n");
		}
	}

	}

	for(i=1;i<=3;i++) {
		for(j=1;j<=18;j++) {
			printf("*");

			if(j==18) {
				printf("\n");
			}
		}
	}

	return 0;
}