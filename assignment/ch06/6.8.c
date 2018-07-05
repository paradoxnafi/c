#include <stdio.h>

int main()
{
	int i, age[100], count;
	count = 0;

	for(i = 0; i < 10; i++) {
		printf("%d. Enter age: ", i+1);
		scanf(" %d", &age[i]);

		if(age[i] >= 50 && age[i] <= 60) {
			count++;
		} else {
			continue;
		}

	}

	printf("\n%d people age in range of 50-60 \n", count);
	return 0;
}