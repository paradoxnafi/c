#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'A';
	char first_name[] = "Zed";
	char last_name[] = "Shaw";

	printf("You are %d miles away.\n", distance);
	printf("You have %f level of power.\n", power);
	printf("You have %f awesomre super_power.\n", super_power);
	printf("I have a initial %c.\n", initial);
	printf("I have a first name %s.\n", first_name);
	printf("I have a last name %s.\n", last_name);
	printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);

	int bug = 100;
	double bug_rate = 1.2;

	printf("You have %d bug at the imaginary rate of %f.\n", bug, bug_rate);

	long univers_of_defects = 1L * 1024L * 1024L * 1024L;
	printf("The entire universe has %ld bugs.\n", univers_of_defects);
	double expected_bugs = bug * bug_rate;
	printf("You are expected to have %f bugs.\n", expected_bugs);

	double part_of_universe = expected_bugs / univers_of_defects;
	printf("That is only a %e portion of the universe.\n", part_of_universe);

	// this makes no sense, just a demo of something weird
	char nul_byte = '\0';
	int care_percentage = bug * nul_byte;
	printf("Which means you should care %d%%.\n", care_percentage);
	
	return 0;
}