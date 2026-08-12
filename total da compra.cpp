#include <stdio.h>

int quantidade;
float valor;
float total;

main(){
	printf("quantidade do produto");
	scanf("%i", &quantidade);
	
	printf("qual o valor unitario do produto");
	scanf("%i", &valor);
	
	total = quantidade * valor;
	printf(" o total a ser pago sera de:%f", total);
	
	
	
}
