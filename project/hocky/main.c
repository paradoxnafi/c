// This code will ask user for some informations of players. Depending on their performance, this code will say who is the best player.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int T; // This pogram will run a maximum of T times. (EOF value). The value is set as 100.

int main()
{
	for(T = 1; T <= 100; T++) { // T = 100 is EOF value.

		int i;
		int best;
		int n;
		int id[10];
		int match[10];
		int goal[10];
		float sp[10];
		float max_sp;
		char ask;

		max_sp = sp[0];

		printf("Just provide me those informations. I will tell you who is the best player.\n");
		printf("How many players are playing: ");
		scanf(" %d", &n);

		for(i = 0; i < n; i++) {
			printf("%d. Player ID: ", i+1);
			scanf(" %d", &id[i]);

			printf("Match played: ");
			scanf(" %d", &match[i]);

			printf("Goals scored: ");
			scanf(" %d", &goal[i]);
			puts("\n");

			sp[i] = (float)goal[i] / (float)match[i];

			if(sp[i] >= max_sp) { // Checks if current sp is the heighest or not. 
				max_sp = sp[i];
				best = i;  // If current sp is heighest, then it stores the players id in the variable 'best'
			}

		}

		for(i = 0; i < 3; i++) {
			printf("Player %d has played %d matches and scored a total of %d goals. His score point is %.2f \n", id[i], match[i], goal[i], sp[i]);
		}

		printf("So, our best choise is %d who's score is %.2f \n\n", id[best], max_sp);

		printf("Do you want to try again [Y/N]: ");
		scanf(" %c", &ask);

		if(ask == 'Y' || ask =='y') {
			continue;
			puts("\n");
		} else {
			break;
		}

	}

	return 0;
}
