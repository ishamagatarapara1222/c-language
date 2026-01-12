#include<stdio.h>
int main(){
	
	int score;
	char grade;
	
	//input score
	printf("Enter your score:");
	scanf("%d", &score);
	
	//calculation using ternary operator
	grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F';
            
 printf("your grade is %c.",grade);
  
  
  //comment using switch case
  switch (grade) {
        case 'A':
            printf("Excellent work! ");
            break;
        case 'B':
            printf("Well done! ");
            break;
        case 'C':
            printf("Good job. ");
            break;
        case 'D':
            printf("You passed, but you could do better. ");
            break;
        case 'F':
            printf("Sorry, you failed. ");
            break;
        default:
            break;
}
if (grade >= 'A' && grade <= 'D') {
        printf("You are eligible for the next level.\n");
    } else {
        printf("Please try again next time.\n");
    }

    return 0;
}