// Md. Nafi Shahriyar
// ID: 18103346

#include <stdio.h>


int main()
{
	float p_cost, a_cost, persent;
	char ask;

	if_error: //our code will restart from here if input data is invalid

	printf("What is your purchess cost: ");
	scanf(" %f", &p_cost);

	printf("What did you bought, Mill cloth or hand made item[M/H]: ");
	scanf(" %c", &ask);

	if(ask == 'M' || ask == 'm') {
		if(p_cost <= 100) {
			persent = 0;
		} else if(p_cost <= 200) {
			persent = 5 / 100;
		} else if(p_cost <= 300) {
			persent = 7.5 / 100;
		} else if(p_cost > 300) {
			persent = 10 / 100;
		} else {
			printf("You have entered wrong data. please try again.\n");
			goto if_error;
		}

	} else if(ask == 'H' || ask == 'h') {
		if(p_cost <= 100) {
			persent = 5 / 100;
		} else if(p_cost <= 200) {
			persent = 7.5 / 100;
		} else if(p_cost <= 300) {
			persent = 10 / 100;
		} else if(p_cost > 300) {
			persent = 15 / 100;
		} else {
			printf("You have entered wrong data. please try again.\n");
			goto if_error;
		}

	}

	
	a_cost = p_cost - (p_cost * persent);

	printf("your bill is %.2f taka and you have got %.2f%% discount \n", a_cost, (persent * 100) );

	return 0;
}
