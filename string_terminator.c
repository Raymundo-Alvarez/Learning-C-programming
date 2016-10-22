#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* to reduce the amount of  bites, we need to classify where to limit the amount of bites */
	/* /0 disregard the unnecessary byte */
	/* In "Raymundo Alvarez", there is 16 characters which means 16 bytes */
	/* However, if "Raymundo/0Alvarez" is in placed, it only takes 15 bytes of memory */
	/* /0 is regarded as the string terminator */
	/* */
	/* */
	/* */
	/* Next this is a string: "Raymundo Alvarez" */
	/* The following is an array */
	/* What is an array? */
	/* Array = list of items off the same datatype */

	char name[17] = "Raymundo Alvarez";
	printf("My name %s.\n", name);

	/* The item within the brackets is called the elements */
	name[1] = 'e';
	printf("My name %s.\n", name);

	char food[] = "tuna";
	printf("The best food in the whole wide world is %s! \n", food);

	strcpy(food, "cheeseburger");
	printf("The best food in the whole wide world is %s! \n", food);

	return 0;

}