#include<stdio.h>
int main(){
	float principal, rate, time, simpleInterest;
	 
	//input values
	printf("Enter principal amount:-");
	scanf("%f",&principal);
	
	printf("Enter rate of interest:-");
	scanf("%f",&rate);
	
	printf("Enter time (in years):-");
	scanf("%f",&time);
	
	//calculate simple interest
	simpleInterest=(principal*rate*time)/100;
	
	//output result
	printf("simpleInterest=%.2f\n",simpleInterest);
	 
	 return 0;
	
		
	
	
}