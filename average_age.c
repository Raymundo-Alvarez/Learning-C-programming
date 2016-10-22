#include <stdio.h>
#include <stdlib.h>

int main()
{
	float age1, age2, age3, average;
	age1 = age2 = 20.0;

	printf("Enter your age in 2012:\n");
	scanf("%f", &age3);

	average = (age1 + age2 + age3) / 3;
	printf("\n The average age of the group is %.2f", average);

	return 0;
}