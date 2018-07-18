#include <stdio.h>

int main()
{
	int m, n;

	printf("Enter dimention of array: ");
	scanf("%d %d", &m, &n);

	int a[m][n];
	int b[m][n];
	int c[m][m];
	int i, j;

	for(i = 0; i <= m-1; i++) {
		for(j = 0; j <= n-1; j++) {
			printf("a[%d][%d]: ", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\n");

	for(i = 0; i <= m-1; i++) {
		for(j = 0; j <= n-1; j++) {
			printf("b[%d][%d]: ", i+1, j+1);
			scanf("%d", &b[i][j]);
		}
	}

	for(i = 0; i <= m-1; i++) {
		for(j = 0; j <= m-1; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("\n");
	
	for(i = 0; i <= m-1; i++) {
		for(j = 0; j <= n-1; j++) {
			printf("%d ", c[i][j]);
		}

		printf("\n");
	}

	return 0;
}
