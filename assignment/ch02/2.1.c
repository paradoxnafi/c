#include <stdio.h>

int main()
{
	float i, n;
	float sum = 0;

	printf("give me a number: ");
	scanf("%f", &n);

	for (i = 1; i <= n; i++) {
		sum = sum + (1/i);
	}
	printf("%f\n", sum);

	return 0;
}
