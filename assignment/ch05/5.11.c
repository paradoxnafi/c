// Md. Nafi Shahriyar
// ID: 18103346

#include <stdio.h>

int main()
{ 
	float a, b, hypo, tmp1, tmp2;

	printf("Enter value of two sides and at last hypothenious saperated by new line\n");

	scanf("%f %f %f", &a, &b, &hypo);

	tmp1 = ( (a*a) + (b*b) );
	tmp2 = (hypo*hypo);
	if(tmp1 == tmp2)
	printf("Triangle is Right Angle Triangle \n");
	else
	printf("Triangle is Not a Right Angle Triangle \n");

	return 0;
} 