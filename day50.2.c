#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    printf("\nAll substrings are:\n");

    // Generate all substrings
    for(i = 0; i < len; i++) {
        for(j = i; j < len; j++) {
            for(k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
