#include <stdio.h>

int main()
{
	int Input, tmp, left;
	printf("Enter an integer of four digits: ");
	scanf("%d", &Input);
	tmp = Input/1000;
	left = Input%1000;
	tmp += left/100;
	left = Input%100;
	tmp += left/10;
	left = Input%10;
	tmp += left/1;
	tmp += left/1;
	printf("%d \n", tmp);
	return 0;
}
