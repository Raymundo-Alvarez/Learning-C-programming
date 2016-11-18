#include <stdio.h>
#include <stdlib.h>

/* November 18,2016 */
int main() {
	int a = 10, b = 20, answer = 0;
	/* Adding the ++ before 'a' makes a increase by one. */
	/* This is the increment operator. */
	answer = ++a * b;
	printf("Answer: %d \n", answer);

	a = 10, b = 20, answer = 0;
	/* adding the ++ after a makes the increment afterwards. */
	answer = a++ * b;
	printf("Answer: %d \n", answer);

	return 0;
}