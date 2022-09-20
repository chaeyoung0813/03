#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char text; //1byte
	int i; //4byte
	
	printf("input a number : ");
	scanf("%c", &text);
	
	i = text-'0';
	printf("the imput number is %i\n", i);
	
	return 0;
}
