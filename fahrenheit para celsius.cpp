#include <stdio.h>
#include <math.h>

float celsius;
float fahrenheit;

main(){
	printf("qual a temperatura em fahrenheit?\n");
	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit - 32) * (5.0 / 9.0);
	
	printf("a temperatura em celsius e:%.1f", celsius);
}
