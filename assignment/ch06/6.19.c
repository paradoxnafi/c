#include <stdio.h>

int main()
{
	int i, j;

	for(i = 1; i <= 5; i++) {
		if(i != 3) {
			printf("S S S S S\n");
		} else {
			printf("S S O S S\n");
		}

	}

	return 0;
}