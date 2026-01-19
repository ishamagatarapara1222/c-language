#include<stdio.h>
int main(){
	
	int N, i = 1, sum = 0;
	
	printf("Enter a positive integer:-");
	scanf("%d",&N);
	
	do
	{
		sum += i;
		i++;
		
	}while(i<=N);
	
	printf("Sum of numbers from 1 to %d = %d", N, sum);
	
	
	
	
}