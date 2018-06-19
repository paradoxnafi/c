#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
	int i, el[10] = {22, 43, 34, 54 , 12 ,9, 6, 98, 11, 57};

	for(i = 0; i <= 9; i++) {
		printf("Element: %d is %d \n", i+1, el[i]);
	}

	return 0;
}