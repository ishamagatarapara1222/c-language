#include<stdio.h>
int main(){
	
	int num, fd, ld, sum;
	
	printf("Enter a number:-");
	scanf("%d",&num);
	
	ld = num % 10;
	
	fd=num;
	
	while(fd>=10){
		fd=fd/10;
	}
	
	sum=fd+ld;
	
	
	printf("sum of first digit and last digit =%d",sum);
	
	
	
	return 0;
	
	
	
}