// Matrix addition...

#include <stdio.h>

int main()
{
	int a[2][2];
	int b[2][2];
	int c[2][2];
	int i, j;

	for(i = 0; i <= 1; i++) {
		for(j = 0; j <= 1; j++) {
			printf("a[%d][%d]: ", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\n");

	for(i = 0; i <= 1; i++) {
		for(j = 0; j <= 1; j++) {
			printf("b[%d][%d]: ", i+1, j+1);
			scanf("%d", &b[i][j]);
		}
	}

	for(i = 0; i <= 1; i++) {
		for(j = 0; j <= 1; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("\n");
	
	for(i = 0; i <= 1; i++) {
		for(j = 0; j <= 1; j++) {
			printf("%d ", c[i][j]);
		}

		printf("\n");
	}

	return 0;
}