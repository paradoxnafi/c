#include <stdio.h>

int main()
{
	int a, b;
	a = 20;
	b = 10;
	int add(a, b)
	 {
		int sum = a + b;
		printf("%d + %d = %d\n", a, b, sum); 
	}

	int sub(a, b) {
		int sb = a - b;
		printf("%d - %d = %d", a, b, sb);
	}

	add(a, b);
	sub(a, b);

	return 0;
 }
