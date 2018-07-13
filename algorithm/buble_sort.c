// Bubble sort. Can handel upto 1 million integers.
/* 
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int rand_list[1000000], i, j, lim, tmp;
	int check = 1;

	printf("How many random number to generate: ");
	scanf("%d", &lim); printf("\n");

	// Creating a list with ran() function.
	printf("Generated list: ");

	for(i = 0; i < lim; i++) {
		rand_list[i] = ( rand()%9999 + 1 );
		printf("%d ", rand_list[i]);
	} printf("\n\n");

	while(check >= 1) {

		check = 0;
		for(i = 0; i < lim; i++) {

			
			if(rand_list[i] > rand_list[i+1]) {

				tmp = rand_list[i+1];
				rand_list[i+1] = rand_list[i];
				rand_list[i] = tmp;
				check++;
			}
		}
	}

	printf("Sorted list: ");

	for(i = 0; i < lim; i++) {
		printf("%d ", rand_list[i+1]);
	} printf("\n");

	return 0;
}