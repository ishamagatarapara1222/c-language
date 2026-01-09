#include<stdio.h>
int main(){
	
	int a,b,c;
	 
	 printf("Enter value of A :");
	 scanf("%d", &a);
	
	printf("\nEnter value of B :");
	 scanf("%d", &b);
	 
	 printf("\nEnter value of C :");
	 scanf("%d", &c);
	 
	printf("\nA:&a, B:&b, C:&c",a,b,c);
	
	if(a>b){
		//a is greater
		if(a>c) {
			printf("\nA is greater.");
		}else
		 	printf("\nC is greater.");
		
	}else{
		//b is greater
		 if(b>c){
		 	printf("\nB is greater."); 
		 	
		 }else{
		 	printf("\nC is greater.");
		 	
		 }
	}	 
	 
	 
	 
	 
	 
	 
}