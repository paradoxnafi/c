#include <stdio.h>

float price;
float paise;

int main()
{
	printf("Enter price: ");
	scanf("%f", &price);

	paise = price * 100;

	printf("Price in paise is %.0f\n", paise);

	return 0;
}

