// Md.Nafi Shahriyar
// 18103346

#include <stdio.h>

int main()
{
	int i, j, k, lim;
	k = 1;

	printf("Enter a number: ");
	scanf(" %d", &lim);

	for(i = 1; k <= lim; i++) {
		for(j = 1; j <= i; j++) {

			printf("%d ", (k % 2));

			k++;
			
		}
		printf("\n");
	}

	return 0;
}