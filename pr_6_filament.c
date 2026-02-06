#include <stdio.h>

int main() {
    char str[100];
    int i, j, length = 0;
    int freq[256] = {0};
    int isPalindrome = 1;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string (without using strlen)
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Palindrome check
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    // Output palindrome result
    if (isPalindrome)
        printf("The given string is a Palindrome.\n");
    else
        printf("The given string is NOT a Palindrome.\n");

    // Frequency count
    for (i = 0; i < length; i++) {
        freq[(int)str[i]]++;
    }

    // Output frequency
    printf("\nFrequency of each character:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c => %d\n", i, freq[i]);
        }
    }

    return 0;
}
