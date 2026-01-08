#include<stdio.h>
int main(){
	
	int sub1, sub2, sub3;
	float average;
	
	printf("Enter marks of subject 1:");
	scanf("%d", &sub1);
	
	printf("Enter marks of subject 2:");
	scanf("%d", &sub2);
	
	printf("Enter marks of subject 3:");
	scanf("%d", &sub3);
	 
	 if(sub1<0 || sub1>100)
	 {
	 	 printf("Invalid marks in subject 1 \n");
	 }
 	  else if(sub2 < 0 || sub2 > 100)
    {
        printf("Invalid marks in Subject 2\n");
    }
    else if (sub3 < 0 || sub3 > 100)
    {
        printf("Invalid marks in Subject 3\n");
    }
    else
    {
        average = (sub1 + sub2 + sub3) / 3.0;
        printf("Average Marks = %.2f\n", average);
    }

    return 0;
}

	
	