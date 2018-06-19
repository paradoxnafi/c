#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	char name[20], food[20], out[50] = "";

	puts("What is your name:");
	gets(name);
	puts("What is your favourite food:");
	gets(food);

	strcat(out, name);
	strcat(out, " loves to eat ");
	strcat(out, food);

	puts(out);

	return 0;
}