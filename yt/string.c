#include <stdio.h>
#include <string.h>

int main()
{

	char name[33] = "Hello, my name is Nafi Shahriyar";
	printf("%s\n", name);
	printf("%c\n", name[18]);
	name[18] = 'R';
	printf("%s\n", name);

	char food[] = "Hilsha fish";
	printf("%s\n", food);

	strcpy(food, "Katla fish");
	printf("%s\n", food);
	
	return 0;
}