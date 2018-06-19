/* This code will ask the user to input t heir name. 
	If first charecter is greater than 'M' then he/she will be in Red team. 
	Else he/she will be in Blue team.
	User must input first letter of his name as capital charecter. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int T;
int main()
{
	/*char fname[20];  	

	printf("Enter your first name: ");
	scanf(" %s", fname);

	(fname[0] > 'M') ? printf("Red team\n") : printf("Blue team\n"); 

} */

	int friends;
	for(friends = 0; friends <= 61; friends++) {
		printf("I have %d fiend%s \n", friends, (friends != 1) ? "s" : "");
	}

	return 0;
}