//Temperature Converter
#include<stdio.h>
int main(){
	
	float celsius, fahrenheit;
	
	//input celcius
	printf("Enter the temperature in celcius:-");
 	scanf("%f", &celsius);
	
	//calculation
	fahrenheit=( 9 / 5 * celsius )+ 32 ;
	
	//display result
	printf("The temperature in fahrenheit=%.2f\n",fahrenheit);
	
	return 0;
		
	
	
}