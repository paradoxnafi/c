#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "MyInfo.h"

int T;
int main()
{
    for(T = 1; T <= 100; T++) {    	
    	printf("What is your name?\n\t: ");
    	scanf("%s", &name);
		printf("How old are you?\n\t: ");
    	scanf("%d", &age);
    	printf("Your name is %s and you are %d\n\n", name, age);

    }
	return 0;
}