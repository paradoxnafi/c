#include <stdio.h>
#include <string.h>

int main()
{
	int a[6], b[6], sum[6];
	int i;

	for(i = 0; i < 5; i++) {
		printf("%d. Enter value of a: ", i+1);
		scanf(" %d", &a[i]);
		printf("%d. Enter value of b: ", i+1);
		scanf(" %d", &b[i]);

		sum[i] = a[i] + b[i];
	}

	puts("\n**********************************\n");
	for(i = 0; i < 5; i++) {
		printf("%d + %d = %d \n", a[i], b[i], sum[i]);
	}

	return 0;
}
