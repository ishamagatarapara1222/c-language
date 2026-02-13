#include<stdio.h>

//UDFs

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int mul(int a, int b){
	return a*b;
}

float div(int a, int b){
	return (float)a/b;
}

int mod(int a, int b){
	return a%b;
}


int main(){
	
	int choice;
	int x,y;
	
	do{
		
		printf("=========CALCULATER_MENU==========\n");
		printf("1. Addition (+) \n");
		printf("2. Subtraction (-) \n");
		printf("3. Multiplication (*) \n");
		printf("4. Division (/) \n");
		printf("5. Modulas (%%) \n");
		printf("0. exit \n");
		printf("Enter your choice:");
		scanf("%d", &choice);
		
		if(choice >=1 && choice <=5){
			printf("Enter first number:");
			scanf("%d" ,&x);
			printf("Enter second number:");
			scanf("%d" ,&y);
			}
		
		
		switch(choice) {
			
			case 1:
				printf("Addition of %d and %d is %d \n", x, y, add(x,y));
				break;
				
			case 2:
				printf("Subtraction of %d and %d is %d \n", x, y, sub(x,y));
				break;
				
			case 3:
				printf("Multiplication of %d and %d is %d \n", x, y, mul(x,y));
				break;
				
			case 4:
				if(y==0)
					printf("Division by 0 is not allowed!!!");
				else
				    printf("Division of %d and %d is %d \n", x, y, div(x,y));
				break;
				
			case 5:
				if(y==0)
					printf("Modulus by o is not allowed!!!");
				else
					printf("Modulus of %d and %d is %d \n", x, y, mod(x,y));
				break;
					
			case 0:
				printf("Exiting program...");
				break;
				
			default:
				printf("Invalid choice !!!");
		}
printf("--------------------------------------------------------------------");		
} while(choice != 0);
return 0;	
	
}




















