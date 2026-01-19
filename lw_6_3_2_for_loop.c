#include<stdio.h>
int main(){
	
	int N;
	long long factorial = 1;
	
	printf("Enter a positive number:-");
	scanf("%d", &N);
	
	for (int i = 1; i <= N; i++){
		factorial *= i;
		
	}
	
	
	printf("factorial of %d is %lld\n", N, factorial);
	
	return 0;
	
	
	
}
