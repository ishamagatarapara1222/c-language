#include<stdio.h>
#include<string.h>

int main(){
	
	char password[100];
	int hasLetter=0, hasDigit=0, hasSpecial=0;
	
	printf("create your password:-");
	scanf("%s" ,&password);
		
	
	int length = strlen(password);
	
	if(length<6){
		printf("Your password is not strong !!!\n");
		return 0;
	}
	
	for(int i=0; password[i]!='\0'; i++){
		
		//check letter
		
		if(	(password[i]>='A' && password[i]<='Z')||	
			(password[i]>='a' && password[i]<='z')) {
			hasLetter=1;
		}
		
		//check digit
		
		else if(password[i]>='0' && password[i]<='9'){
			hasDigit=1;
		}
		
		//check special char 
		
		else{
			hasSpecial=1;
		}
		
	}
	
	if(hasLetter && hasDigit && hasSpecial)
		printf("Your password is strong..!\n");
	else
		printf("Your password is not strong..!\n");
	
	return 0;
}