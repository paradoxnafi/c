// Md.Nafi Shahriyar
// 18103346

#include <stdio.h>

int main()
{
	int i, j, k, sum;
	sum = 0;
	k = 1;

	for(i = 1; k <= 91; i++) {
		for(j = 1; j <= i; j++) {

			printf("%d ", k);
			k++;
			sum += k;
		}
		printf("\n");
	}
}