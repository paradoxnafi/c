// Md. Nafi Shahriyar
// ID: 18103346

#include <stdio.h>

int main()
{
	int count, i, j;

	for(i = 101; i < 200; i++) {
		for(j = 1; j < 200; j++) {
			if(i % j == 0) {
				continue;
			} else {
				count++;
				printf("%d is a prime number \n", i);
			}
		}
	} 
		
	printf("There are %d prime numbers between 100 and 200. \n", count);
	return 0;
}