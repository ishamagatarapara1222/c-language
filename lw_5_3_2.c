#include<stdio.h>
int main(){

	int lang, choice;
	
	printf("Press 1 for English.\n");
	printf("Press 2 for Hindi.\n");
	printf("Press 3 for Gujrati.\n");
	printf("Enter your choice:-");
	scanf("%d",&lang);
	
	switch (lang) {
		case 1: //english
			printf("\n Press 1 for Internet recharge.\n");
			printf("\n Press 2 for Top-Up recharge.\n");
			printf("\n Press 3 for special recharge.\n");
			printf("\n Enter your choice:-");
			scanf("%d",&choice);
			
			switch (choice){
				case 1:
					printf("You have successfully done an Internet recharge.");
					break;
				case 2:
					printf("You have successfully done a top-up recharge.");
					break;
				case 3:
					printf("You have successfully done a special recharge.");
					break;
				default:
					printf("Invalid choice.");
					
				}
				break;
				
				
		case 2: //hindi
			printf("\nInternet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            
            switch (choice) {
                case 1:
                    printf("Aapne safaltapurvak Internet Recharge kiya hai.");
                    break;
                case 2:
                    printf("Aapne safaltapurvak Top-up Recharge kiya hai.");
                    break;
                case 3:
                    printf("Aapne safaltapurvak Special Recharge kiya hai.");
                    break;
                default:
                    printf("Galat choice.");
            }
            break;
            
            case 3:   // Gujarati
            printf("\nInternet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Tame safaltapurvak Internet Recharge karyu chhe.");
                    break;
                case 2:
                    printf("Tame safaltapurvak Top-up Recharge karyu chhe.");
                    break;
                case 3:
                    printf("Tame safaltapurvak Special Recharge karyu chhe.");
                    break;
                default:
                    printf("Khotto vikalp.");
            }
            break;

        default:
            printf("Invalid language choice.");
    }

    return 0;
}
            
            
			
		
		
		
		
		
		
		
		
		
		
	































	

