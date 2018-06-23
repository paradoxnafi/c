#include <stdio.h>

int main() 
{
	int i, tmp, sum;
	tmp = 0;
	sum = 0;

	for(i = 101; i < 200; i++) {

		if(i % 7 == 0) {
			tmp += 1;
			sum += i;
		}
	}

	printf("%d numbers are divislol of 7 between 101 and 199 \nSum = %d \n", tmp, sum);

}