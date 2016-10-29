#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char firstName[20];
	char lastName[20];
	int numberOfCourses;

	printf("What is your first name? \n");
	scanf("%s", firstName);

	printf("What is your last name? \n");
	scanf("%s", lastName);

	printf("How many classes are you taking this semester? \n");
	scanf("%d", &numberOfCourses);

	return 0;
}