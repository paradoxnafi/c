#include <stdio.h>

int main()
{
	int i,j,k,lim;
	k=1;

	printf ("enter a number :");
	scanf ("%d",&lim);

	for (i=1;i <= lim; i++) {
		for (j=1;j<=i;j++) {
			printf ("%d",(k%2));
			k++;
		}
		printf ("\n");
	}
	return 0;
}