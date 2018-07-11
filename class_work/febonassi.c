// 1 1 2 3 5 8 13 21

#include <stdio.h>

int main()
{
	int i, n;
	long unsigned t1, t2, next_t;

	t1 = 1;
	t2 = 1;

	printf("How many number to print: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++) {
		printf("%d ", t1);
		next_t = t1 + t2;
		t1 = t2;
		t2 = next_t;
	}

	return 0;
}