// Md. Nafi Shahriyar
// ID: 18103346

#include <stdio.h>
#include <string.h>

int main()
{
	int number[400];
	int i, lim, m80, m60, m40, m0;
	m80 = m60 = m40 = m0 = 0;

	printf("Calculate for how many students: ");
	scanf(" %d", &lim);

	for(i = 1; i <= lim; i++) {
		printf("%d. Enter marks: ", i);
		scanf(" %d", &number[i]);

		if(number[i] > 80 && number[i] <= 100) {
			m80 += 1;
		} else if(number[i] > 60 && number[i] <= 80) {
			m60 += 1;
		} else if(number[i] > 40 && number[i] <= 60) {
			m40 += 1;
		} else if(number[i] <= 40 && number[i] >= 0) {
			m0 += 1;
		} else {
			printf("Something went wrong.\n");
		}
	}

	printf("\n%d students got marks between 81 - 100\n", m80);
	printf("%d students got marks between 61 - 80\n", m60);
	printf("%d students got marks between 41 - 60\n", m40);
	printf("%d students got marks between 0 - 40\n", m0);

	return 0;
}
