#include<stdio.h>
int main(){
	
	int rows, cols, i, j;
	float sum=0, average;
	
	//input rows and columns size
	printf("Enter array's rows size:-");
	scanf("%d",&rows);
	printf("Enter the array's column size: ");
    scanf("%d", &cols);
	
	int a[rows][cols];
	
	//input array elements
	printf("\n Enter array's elements:-");
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
			sum+= a[i][j]; //for sum of elements
		}
	}
	
//calculates average
//total elements=rows*cols

average=sum/(rows*cols);

printf("Average of an array=%.2f\n",average);
	
	return 0;
	
}