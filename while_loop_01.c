#include <stdio.h>
#include <stdlib.h>

/* November 18,2016 */
/* This is the work on while loop. */
/* the basics of the while loop:
while(test) {
	code;
}
*/
/* This the basics to the while loop format. */
/* Now to an example where it will go on forever. */
/* 
int main() {
	int earth = 1;
	while(earth < 10) {
		printf("The earth has now revolved %d times.\n", earth);
	}
	return 0;
}
*/
/* To avoid infinitial loop without stop, the increment 
operator allows to make a certain point to stop the loop. */
/* Example of a loop in a while loop. */
int main() {
	int earth = 1;

	while(earth < 10){
		printf("The earth has now revolved %d times.\n", earth);
		earth++;
	}

	return 0;
}