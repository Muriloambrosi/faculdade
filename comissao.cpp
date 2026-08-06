#include <stdio.h>

float venda;
float comissao;

main(){
	
	printf("digite o valor total de venda");
	scanf("%f", &venda); 
	
	comissao = venda * 0.05;
	printf("\ncomissao: %2f", comissao);
	
}
