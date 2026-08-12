#include <stdio.h>
#include <math.h>


float celsius;
float fahrenheit;

main(){
	printf("qual a temperatura em celsius?\n");
	scanf("%f", &celsius);
	
	fahrenheit = (9 * celsius + 160) / 5;
	
	printf("a temperatura em fahrenheit e:%.1f", fahrenheit);
	
	
	
	
}
