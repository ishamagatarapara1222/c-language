#include<stdio.h>
int main(){
	
float baseSalary;
float hraPercent, daPercent, taPercent;
float hra, da, ta, grossSalary;

printf("Enter the Base Salary:-");
scanf("%f", &baseSalary);

printf("Enter HRA Percentage:-");
scanf("%f", &hraPercent);

printf("Enter DA Percentage:-");
scanf("%f", &daPercent);

printf("Enter TA Percentage:-");
scanf("%f", &taPercent);

hra=baseSalary*hraPercent/100;
da=baseSalary*daPercent/100;
ta=baseSalary*taPercent/100;

grossSalary=baseSalary+hra+da+ta;

printf("\nHRA Amount = %.2f", hra);
printf("\nDA Amount = %.2f", da);
printf("\nTA Amount = %.2f", ta);
printf("\nGrossSalary = %.2f",grossSalary);

return 0;

	
	
}