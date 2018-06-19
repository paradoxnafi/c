#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
 	char a = 'a';
 	char b = 'B';
 	char c = '7';
// Playing around with toupper and to lower function.
 	printf("%c \n", toupper(a) );
 	printf("%c \n", tolower(b) );
 	printf("%c \n", toupper(c) );       	

// Now checking out two builtin string functioin to concatenate and replace string.

 	char talk[100] = "Hey ";

 	printf("%s \n", talk);

 	strcat(talk, "man ");
 	printf("%s \n", talk);

 	strcat(talk, "how are you?");
 	printf("%s \n", talk);

 	strcpy(talk, "Good mornig sir. Jervis at your service");
 	printf("%s \n", talk);

	return 0;
}