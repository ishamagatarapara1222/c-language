#include<stdio.h>
int main(){
	
	int N , i = 1;
	long long factorial = 1;
	
	
	printf("Enter a positive number:-");
	scanf("%d",&N);
	
	do
	{
		factorial *= i;
		i++;
		
	}while(i<=N);
	
	
	printf("Factorial of %d is : %lld", N, factorial);
	
	return 0;	
	
}