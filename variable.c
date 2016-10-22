#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Variables are a paceholder for something else */
	/* variables CANNOT start with a number or an under score */
	/* CANNOT have spaces */
	/* NO odd symbols */
	/* DO NOT name variables as names of funtions */
	/* start with a letter */

	int age;

	age = 55;

	int year;

	year = 2016 - 1967;

	int currentAge;

	int currentYear;

	currentYear = 2016;

	int birthYear;

	birthYear  =  1992;

	currentAge = currentYear - birthYear;

	printf("Rick is %d old.\nNick is %d old.\nTanya is %d old", age, year, currentAge);

	return 0;
}