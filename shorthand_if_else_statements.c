#include <stdio.h>
#include <stdlib.h>

int main() {
	/* November 13, 2016 */
	/* insted of making a long list of 'if else' statements */
	/* the syntax */
	/* (test) ? trueCode : falseCode; */
	/* trueCode will test the code if it is true. */
	/* falseCoe will test the code if it is false. */
	char lastName[25];
	printf("Enter your last name: \n");
	scanf(" %s", lastName);

	(lastName[0] < 'L') ? printf("Your last name is from the A-K group") : printf("Your last name is from the L-Z group");

	return 0;
}