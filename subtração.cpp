#include <stdio.h>


int ano1;
int ano2;
int idade;


main(){
	printf("digite o ano atual");
	scanf("%i", &ano2);
	
	printf("digite o ano de nascimento \n");
	scanf("%i", &ano1);
	
    idade = ano2 - ano1;
    printf("\n idade %i",idade);
}
