#include <stdio.h>
#include <stdlib.h>


/* November 18,2016 */
/* First tutorial on increment */
/* For now, the ++ at the end and front of the variable do not matter. */
/* in the next  example, it will matter where the ++ is located. */
int main() {
	int car = 25;
	printf("%d\n", car);
	car++; 
	printf("%d\n", car);
	car--;
	printf("%d\n", car);
	++car;
	printf("%d\n", car);
	return 0;
}