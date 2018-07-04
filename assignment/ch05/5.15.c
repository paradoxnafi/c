// Md. Nafi Shahriyar
// ID: 18103346

#include <stdio.h>
#include <math.h>

int main()
{
	double x, S, C, T;
	char ask;

	printf("Angel: ");
	scanf(" %lf", &x);

	printf("To calculate for sin(x), type 'S' \n");
	printf("To calculate for cos(x), type 'C' \n");
	printf("To calculate for tan(x), type 'T' \n");

	S = sin(x);
	C = cos(x);
	T = tan(x);

	printf("Waiting for input: ");
	scanf(" %c", &ask);

	if(ask == 'S' || ask == 's') {
		printf("sin(%.2lf) = %lf \n", x, S);
	} else if(ask == 'C' || ask == 'c') {
		printf("cos(%.2lf) = %lf \n", x, C);
	} else if(ask == 'T' || ask == 't') {
		printf("tan(%.2lf) = %lf \n", x, T);
	} else {
		printf("Ops.. Something went wrong. Please try again. \n");
	}

	return 0;
}