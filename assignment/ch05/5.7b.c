// Md.Nafi Shahriyar
// 18103346

#include <stdio.h>

int main()
{
	int i, j, k, sum, bin;
	sum = 0;
	k = 1;

	for(i = 1; k <= 91; i++) {
		for(j = 1; j <= i; j++) {

			printf("%d ", (k % 2));

			k++;
			
		}
		printf("\n");
	}

	return 0;
}