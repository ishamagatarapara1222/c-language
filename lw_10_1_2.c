#include<stdio.h>

 //UDF to check  divisibility
 
 int checkDivisible(int n)
{
	if(n%3 == 0 && n%5 == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int num, result;
	
	printf("Enter any number:-");
	scanf("%d", &num);
	
	result =checkDivisible(num);
	
	if (result == 1)
		printf("The given number is divisible by both 3 & 5.");
	else
	printf("The given number is not divisible by both 3 & 5.");
	
	return 0;
}