#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0, len = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length (ignoring newline if present)
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    j = len - 1;  // last character

    // Check palindrome
    while (i < j) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
