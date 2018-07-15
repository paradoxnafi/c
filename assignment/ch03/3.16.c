#include<stdio.h>

int main()
{
	int call;
	float bill;
	printf("Enter Numbers of Call: ");
	scanf("%d",&call);
	(call < 100) ? printf("250\n"); : bill = (250 + ((call % 250) * 1.25)); 
	//printf("Mobile bill of Customer is %.2f taka", bill);
}