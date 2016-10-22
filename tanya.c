#include <stdio.h>
#include <stdlib.h>

/*To compile and run this C file on terminal(Ubuntu), first save this file */
/* Go to "File"*/
/* Go to "Save As"*/
/* Name it whatever you like*/
/* Go and Save it*/
/* Open the Terminal*/
/* type after the $ "cd Desktop"*/
/* type "subl [the name in which you saved the file under].c"*
/* the terminal will direct you back to the text editor */
/* it needs to be compiledb */
/* Compile it by pressing "CTRL + B"*/
/* At the bottom of the the text editor, it should bring out some statement*/
/* Typically, it will say "[Finished in XXXX.XXXXs"*/
/* Go back to the Terminal*/
/* type "./[name of file"*/
/* note: DO NOT TYPE the extension of the file. */
/* In this case, the ".c" exension. */
/* it will print the statement of what you asked in "print(statement)"*/


int main()
{
	/* This is a conversion character */
	/* string? */
	/* %s is only for texts, words */
	printf("%s is the best person ever!\n", "Tanya");
	printf("%s is the best %s ever!\n", "Ray", "programmer");
	/* %d is a whole number or an integer */
	printf("Today is October %d, %d\n", 21, 2016);
	/* %f is a number with decimals */
	/* %f is refered to as a floating number */
	printf("I am just going to type the number %f to illustrate how floating numbers work\n", 3.1415951122);
	/* In this example, I said I wanted one more vaalue after the decimal */
	printf("Today's weather is at %.1f degrees F.\n", 85.3);
	/* This is conversion characters */
	return 0;
}