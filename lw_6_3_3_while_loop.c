#include<stdio.h>
int main(){
	
	int N, i=1;
	
	printf("Enter a number:-");
	scanf("%d",&N);
	
	while(i <= 10){
		printf("%d * %d = %d\n",N, i, N*i);
		i++;
		
	}	
	
	return 0;
	
}