#include <stdio.h>
#include <stdlib.h>

int main() {
	char answer;

	printf("Is the sky blue? (y/n) \n");
	scanf(" %c", &answer);

	/* How to make 'OR' statements. */
	/* To use 'OR' statements, you use || to make 'OR' statements. */
	if( (answer=='y') || (answer=='n') ){
		printf("Good response. You chose the correct options.");
	}else{
		printf("Incorrect! Please use the correct response method.");
	}

	return 0;
}