#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* here, I am going to work on developing on a simple interest calculator */
	float balance = 2000;

	balance *= 1.1;
	/* the above statement is a shorter of the longer equation */
	/* long equation = balance = balance * 1.1 */
	printf("Balance: %.2f \n", balance);
	balance *= 1.1;
	printf("Balance: %.2f \n", balance);
	balance *= 1.1;
	printf("Balance: %.2f \n", balance);
	balance *= 1.1;
	printf("Balance: %.2f \n", balance);

	return 0;
}