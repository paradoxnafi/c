#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
	int i, num;

	for(i = 1; i <= 100; i++) {
		num = ( rand()%6 ) + 1;
		printf("%d \n", num);
	}       	

	return 0;
}
