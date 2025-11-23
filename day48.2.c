#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    char temp;
    while(start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++) {
        // When space or end of sentence found, reverse that word
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
        if(str[i] == '\0')
            break;
    }

    printf("Modified sentence: %s", str);

    return 0;
}
