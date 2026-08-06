#include <stdio.h>

float cobre;
float zinco;
int latao;
main(){
	
	printf("digite a quantidade de latao");
	scanf("%i", &latao);
	
	cobre =latao * 0.7;
	zinco =latao * 0.3;
	
    printf("a quantidade exata de cobre e zinco necessarias sao respectivamente de:\n %f\n %f", cobre, zinco);
}
