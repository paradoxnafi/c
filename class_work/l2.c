#include <stdio.h>
 
int main()
{
	int i, j, n, k;

	printf("Enter a number: ");
	scanf(" %d", &n);

	for(i = n; i >= 1; i--) {
		for(j = i, k = 1; j >= 1; j--, k++) {
			printf("%3d", k);
		}
		printf("\n");
	}
	return 0;
}