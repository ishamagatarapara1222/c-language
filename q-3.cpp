
#include <stdio.h>

/* Function to reverse a string */
void reverseString(char str[]) {
    int length = 0;
    int i;
    char temp;

    /* Find length manually */
    while (str[length] != '\0') {
        length++;
    }

    /* Swap characters from both ends */
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* Remove newline if present */
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
