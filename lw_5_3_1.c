#include<stdio.h>
int main(){
	
	int  a, b, c, min;
	
	//input three numbers
	printf("Enter three numbers:-");
	scanf("%d %d %d", &a, &b, &c);
	
	//using ternary operator to find minimun number
	min = (a<b) ? ((a<c)?a:c) : ((b<c)?b:c) ;	
	
	printf("Minimun number is :- %d", min);
	
	return 0;
	
	
}