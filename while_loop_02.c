#include <stdio.h>
#include <stdlib.h>

int main() {
	/* More example of a while loop. */
	int day = 1;
	float amount = 1.00;

	/* stops at day 31 */
	while(day <= 31) {
		/* provides results of the while loop conditition. */
		printf("Day: %d \t Amount: $%.2f \n", day, amount);
		amount *= 1.038;
		day++;
	}

	return 0;
} 