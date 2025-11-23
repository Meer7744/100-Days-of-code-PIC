#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int freq[256] = {0};  // To track character frequency (ASCII)
    int left = 0, right = 0, maxLen = 0;

    // Input string
    printf("Enter string: ");
    scanf("%[^\n]s", s);

    int n = strlen(s);

    // Sliding window approach
    while (right < n) {
        freq[(int)s[right]]++;

        // If character repeats, shrink window
        while (freq[(int)s[right]] > 1) {
            freq[(int)s[left]]--;
            left++;
        }

        // Update max length
        int windowSize = right - left + 1;
        if (windowSize > maxLen)
            maxLen = windowSize;

        right++;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
