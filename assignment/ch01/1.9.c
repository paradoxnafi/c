// Bug exists. Fix it..........
#include <stdio.h>

int main() {
	float c, f;
	int ask;

	printf("To convert farenheit to celcius input 1\nTo convert celcius to farenheit input 0\n\t:");
	scanf("%d", &ask);

	if (ask == 1) {
		printf("input temperature in farenheit: ");
		scanf("%f", &f);
		c = ((f - 32) / 9) * 5;
		printf("%.2f degree farenheit = %.2f degree celcius\n", f, c);
	}
	else if (ask == 0) {
		printf("input temperature in celcius: ");
		scanf("%f", &c);
		f = ((9 * c) / 5) + 32;
		printf("%.2f degree celcius = %.2f degree farenheit\n", c, f);
	}
	else {
		printf("Please try again and provide correct input \n");
	}
	return 0;
}
