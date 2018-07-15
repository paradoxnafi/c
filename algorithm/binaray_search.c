		//// Work remains ////

// Sorting some randomly generated numbers with selection sort. Then I will perform binary search on them. 
// In binary serach user will input  a number.

/* we will check if random_list[j] < random_list[i] or not. 
If yes, we will store random_list[i] in tmp. Then update the list (rand_list[i] = rand_list[j])
Finally e will put tmp in the location of rand_list[j].
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

	// Creating a list with ran() function.
	printf("Generated list: ");

	for(i = 0; i < lim; i++) {
		list[i] = ( rand()%9999 + 1 );
		printf("%d ", list[i]);
	} printf("\n\n");
	// List is done...

	// Sorting the list.
	for(i = 0; i < lim; i++) {
		for(j = i+1; j < lim; j++) {
			if(list[j] < list[i]) {

				tmp = list[i];
				list[i] = list[j];
				list[j] = tmp;
			}
		}
	}
	// Sort complerte...

	// Printing the sorted list.
	printf("Sorted list: ");

	for(i = 0; i < lim; i++) {
		printf("%d ", list[i]);
	} printf("\n");
	// Print complete...

	printf("\nWhat number are you looking for: ");
	scanf("%d", &n);

	// Starting binary search.
		

	return 0;
}
