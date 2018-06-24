// Md.Nafi Shahriyar
// 18103346

#include <stdio.h>

int main()
{
	int a, b, c, d, m, n;

	printf("Enter value of a, b, c, d, m, n: \n");
	scanf(" %d %d %d %d %d %d", &a, &b, &c, &d, &m, &n);

	float x1 = ( m*d - b*n ) / ( a*d - c*b );
	float x2 = ( n*a - m*c ) / ( a*d - c*b );

	printf("X1 = %f \nX2 = %f \n", x1, x2);

}
