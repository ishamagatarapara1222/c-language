#include<stdio.h>
int main(){
 
 float radius, perimeter;
 const float PI=3.14;
 
 //input radius
 printf("Enter the radius of the circle:-");
 scanf("%f",&radius);
 
 //calculate perimeter
 perimeter=2 * PI * radius;
 
 //display result
 printf("perimeter of the circle =%.2f\n",perimeter);
  
  return 0;	
	
	
	
	
}