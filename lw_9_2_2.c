#include <stdio.h>
#include <string.h>

int main()
{
    char email[100];
    char password[100];

    // correct credentials (jo check karne hain)
    char correctEmail[] = "admin@gmail.com";
    char correctPassword[] = "123456";

    printf("Enter your email: ");
    scanf("%s", email);

    printf("Enter your password: ");
    scanf("%s", password);

    if(strcmp(email, correctEmail) == 0 && strcmp(password, correctPassword) == 0)
    {
        printf("Login Successful...\n");
    }
    else
    {
        printf("Login Failed. Invalid Credentials.\n");
    }

    return 0;
}
