// Selection sort. Can handel upto 1 million integers.
/* we will check if random_list[j] < random_list[i] or not. 
If yes, we will store random_list[i] in tmp. Then update the list (rand_list[i] = rand_list[j])
Finally e will put tmp in the location of rand_list[j].
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int rand_list[1000000], i, j, lim, tmp;

	printf("How many random number to generate: ");
	scanf("%d", &lim); printf("\n");

	// Creating a list with ran() function.
	printf("Generated list: ");

	for(i = 0; i < lim; i++) {
		rand_list[i] = ( rand()%9999 + 1 );
		printf("%d ", rand_list[i]);
	} printf("\n\n");

	for(i = 0; i < lim; i++) {
		for(j = i+1; j < lim; j++) {
			if(rand_list[j] < rand_list[i]) {

				tmp = rand_list[i];
				rand_list[i] = rand_list[j];
				rand_list[j] = tmp;
			}
		}
	}

	printf("Sorted list: ");

	for(i = 0; i < lim; i++) {
		printf("%d ", rand_list[i]);
	} printf("\n");

	return 0;
}