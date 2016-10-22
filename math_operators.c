#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Let's do some mathematics with math operators */
	/* addition */
	int a = 25;
	int b = 550;
	int c = a + b;
	printf("The addition of %d and %d is %d.\n", a, b, c);

	/* subtractiion */
	int d = 25;
	int e = 550;
	int f = a - b;
	printf("The substraction of %d and %d is %d.\n", d, e, f);

	/* multiplication */
	int g = 25;
	int h = 550;
	int i = g * h;
	printf("The multiplication of %d and %d is %d.\n", g, h, i);

	/* division */
	int j = 25;
	int k = 550;
	int l = k / j;
	printf("The division of %d and %d is %d.\n", j, k, l);

	/* modulus */
	int m = 25;
	int n = 550;
	int o = m % n;
	printf("The modulus of %d and %d is %d.\n", m, n, o);

	/* this will be useful when are attempting to get float answers instead of whole integers */

	float p = 247;
	float q = 63;
	printf("The solution of %.2f and %.2f is %.2f.\n", p, q, p/q);

	return 0;

}