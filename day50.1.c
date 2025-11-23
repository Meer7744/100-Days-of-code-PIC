#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char day[3], year[5];

    printf("Enter date in format dd/04/yyyy: ");
    fgets(date, sizeof(date), stdin);

    // Extract day
    strncpy(day, date, 2);
    day[2] = '\0';

    // Extract year (last 4 characters)
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    // Print formatted date
    printf("Converted format: %s-Apr-%s\n", day, year);

    return 0;
}
