// Md. Nafi Shahriyar
// ID: 18103346

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n, i;
	int Unit[100];
	char name[30];
	int bill[100];

	if_error:

	printf("Calcualate for how many users: ");
	scanf(" %d", &n);

	for(i = 0; i < n; i++) {
		printf("%d. User name: ", i+1);
		scanf(" %[^\n]%*c", &name[i]); // scanf ("%[^\n]%*c", name)

		printf("   Unit used: ");
		scanf(" %d", &Unit[i]);

		printf(" %f \n", Unit[i]);

		if(Unit[i] <= 200) {
			bill[i] = Unit[i] * 0.8;
		} else if(Unit[i] <= 300) {
			bill[i] = Unit[i] * 0.9;
		} else if(Unit[i] > 300) {
			bill[i] = Unit[i];
		} else {
			printf("Something went wrong. Please try again. \n");
			goto if_error;
		}

		if(bill[i] < 100) {
			bill[i] = 100;
		} else if(bill[i] > 400) {
			bill[i] = bill[i] + ( (bill[i]) * (15/100) );
		} else {
			printf("Something went wrong. Please try again. \n");
			goto if_error;
		}
	}

	for(i = 0; i < n; i++) {
		printf("%d. Bill for %s is %f \n", i+1, name[i], bill[i]);
	}

	return 0;
}
