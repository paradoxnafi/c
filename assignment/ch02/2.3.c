#include <stdio.h>

int i = 1;

int main()
{
	while(i < 11) {
		if(i % 2 == 0) {
			printf("%d\n", i);
		}
		i++;
	}
	
	return 0;
}