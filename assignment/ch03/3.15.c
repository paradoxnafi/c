#include<stdio.h>

int main()
{
	int x,y,z,Sum;
	float Ave;
	printf("Enter Three Numbers:--\n");
	scanf("%d %d %d",&x,&y,&z);Sum=x+y+z;
	printf("Sum= %d\n",Sum);
	Ave=(x+y+z)/3;
	printf("Average= %.2f\n",Ave);
	((x>y)&&(x>z))?printf("Largest is x :-- %d\n",x):((y>x)&&(y>z))?printf("Largest is y :--%d\n",y):printf("Largest is z :-- %d\n",z);

	((x<y)&&(x<z))?printf("Smallest is x :-- %d\n",x):((y<x)&&(y<z))?printf("Smallest is y :--%d\n",y):printf("Smallest is z :-- %d\n",z);
}