#include<stdio.h>
int  main(){
	
	char string[100];
	int i = 0;
	
	printf("Enter any string:-");
	gets(string); //reads the string including spaces
	
	while(string[i] != '\0'){
			if(string[i] >= 'a'   &&   string[i] <= 'z'){
				string[i] = string[i] - 32; //convert to upper case
			}
			i++;
	}
	
	printf("Upper case string : %s",string);
	
	return 0;
}