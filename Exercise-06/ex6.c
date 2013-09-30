#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double superpower = 56789.4532;
	char initial = 'J';
	char firstname[] = "Padraic";
	char lastname[] = "O'Donoghue";

	printf("You are %d miles away.\n", distance);
	printf("You have %d levels of power.\n", power);
	printf("You have %f superpowers.\n", superpower);
	printf("I have an initial %c.\n", initial);
	printf("I have a first name %s.\n", firstname);
	printf("I have a last name %s.\n", lastname);
	printf("My whole name is %s %c. %s.\n", firstname, initial, lastname);
	return 0;
}