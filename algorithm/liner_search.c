// Selection sort. Can handel upto 1 million integers.
/* 
we will check if random_list[j] < random_list[i] or not. 
If yes, we will store random_list[i] in tmp. Then update the list (rand_list[i] = rand_list[j])
Finally e will put tmp in the location of rand_list[j].
*/
/*
A simple linear search will find desired number from list.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i, j, n, lim, tmp;

	printf("How many random number to generate: ");
	scanf("%d", &lim); printf("\n");

	int list[lim];

	// Generating a list with ran() function.
	printf("Generated list: ");

	for(i = 0; i < lim; i++) {
		list[i] = ( rand()%9999 + 1 );
		printf("%d ", list[i]);
	} printf("\n\n");
	// List generate complete...

	// Starting selection sort.
	for(i = 0; i < lim; i++) {
		for(j = i+1; j < lim; j++) {
			if(list[j] < list[i]) {

				tmp = list[i];
				list[i] = list[j];
				list[j] = tmp;
			}
		}
	}
	// Selection sort complete...

	printf("Sorted list: ");

	// Printing sorted list.
	for(i = 0; i < lim; i++) {
		printf("%d ", list[i]);
	} printf("\n");
	// Sorted list printed...

	printf("\nWhat number are you looking for: ");
	scanf("%d", &n);

	// Stating a linera search for n.
	tmp = 0;
	for(i = 0; i < lim; i++) {
		if(list[i] == n) {
			printf("First found %d in %dth data.\n", n, i+1);
			tmp = 1;
			break;
		}
	}
	if(tmp == 0) {
		printf("%d was not found in database.\n", n);
	}
	// Search completed. If number was found, it has been printed...

	return 0;
}