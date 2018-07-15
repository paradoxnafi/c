#include<stdio.h>
#include<math.h>

void main()
{
	float Dr,Sc,Hc;
	float TBO,EOQ;
	printf("Enter Demand Rate: ");
	scanf("%f",&Dr);
	printf("Enter Setup Cost: ");
	scanf("%f",&Sc);
	printf("Enter Holding Cost: ");
	scanf("%f",&Hc);
	EOQ=sqrt((2*Dr*Sc)/Hc);
	TBO=sqrt((2*Sc)/(Dr*Hc));
	printf("The Economic Order Quantity is : %f\n",EOQ);
	printf("The time Between Order is : %f \n",TBO);
}