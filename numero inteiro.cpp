#include <stdio.h>
 
int tamanhotanque;
char tipocombustivel;
float valortotal;

main(){
	printf("digite o tipo de combustivel G - gasolina e A - Alcool: \n");
	scanf("c", &tipocombustivel);
	printf("digite o tamanho do tanque em litros: \n");
	scanf("%i", &tamanhotanque);
	if(tipocombustivel=='g'){
		valortotal = tamanhotanque * 6.50;
	}else{
		valortotal = tamanhotanque * 4.50;
	}
	printf("\nvalor total: %f", valortotal);
}
