#include <stdio.h>
 
int numero;

main(){
	printf("digite um numero inteiro");
	scanf("%d", &numero);
	
	if (numero < 0) {
		numero = numero * (-1);
		
	printf ("modulo de numero: %d \n", numero);
    }
	}


