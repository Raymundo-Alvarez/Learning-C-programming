#include <stdio.h>
#include <stdlib.h>

/* this file will allow the user to interact with the c program */

int main()
{

	char firstName[20];
	char lastName[20];
	int numberOfCourses;

	printf("What is your first name?\n");
	scanf("%s", firstName);

	printf("What is yout last name?\n");
	scanf("%s", lastName);

	/* use & for variables but not for an array */
	printf("How many courses are you takin this semester?\n");
	scanf("%d", &numberOfCourses);

	printf("%s %s is taking %d this Fall semester.\n", firstName, lastName, numberOfCourses);

	return 0;
}