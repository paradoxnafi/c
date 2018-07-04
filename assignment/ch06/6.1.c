#include <stdio.h>
#include <math.h>

int main()
{
		long int num;
		int count = 0;
		int digit[count+1];
		int b_num = num;

		printf("Enter any number: ");
		scanf(" %ld", &num);

		while(num != 0) {
			num /= 10;
			count++;
		}


	for(i = 1; i <= count; i++)

	return 0;
}