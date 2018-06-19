#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n1, n2, n3;
	n1 = 12, n2 = 11, n3 = 18;
	float average;

	average = ((float)n1 + (float)n2 + (float)n3) / 3;

    printf("%f \n", average);    	

	return 0;
}