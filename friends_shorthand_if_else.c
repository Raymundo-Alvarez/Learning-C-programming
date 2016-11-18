#include <stdio.h>
#include <stdlib.h>

int main(){
	int friends = 25;

	printf("I have %d friend%s", friends, (friends!=1) ? "s" : "");
	
	return 0;
}