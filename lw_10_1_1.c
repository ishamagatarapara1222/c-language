#include<stdio.h>
#include<string.h>

//UDF to find cube
int cube(int n)
{
	return n*n*n;
}

int main()
{
	int num, result;
	
	printf("Enter any number:-");
	scanf("%d",&num);
	
	result=cube(num);
	
	printf("cube is : %d", result);
	
	return 0;
	
}