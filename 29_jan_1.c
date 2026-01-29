#include<stdio.h>
int main(){
	
	int i,n;
	
	printf("enter array size:");
	scanf("%d",&n);
	
	int array[n];
	
	printf("Enter %d elements:",n);

	for(i=0; i<n; i++){
		scanf("%d",&array[i]);
	}	
	
	printf("Reversed array: \n");
	for(i=n-1; i>=0; i--){
		printf("%d \n", array[i]);
	}	
	
}