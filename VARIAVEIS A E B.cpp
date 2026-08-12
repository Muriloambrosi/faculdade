#include <stdio.h>

int vara; 
int varb;

main(){
	printf("qual e o valor da variavel a?\n");
	scanf("%i", &vara);
	
	printf("qual o valor da variavel b?\n");
	scanf("%i", &varb);
	
	vara, varb = varb, vara;
	
	printf("o valor da variavel a e:%i\n o valor da variavel b e:%i, varb, vara");
}
