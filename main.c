#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int input_int;
	float input_float;
	
	printf("enteer a integer : ");
	scanf("%d", &input_int);
	
	printf("enter a float : ");
	scanf("%f", &input_float);
	
	printf("ineger : %d, float : %f\n", input_int, input_float);
	
	return 0;
}
