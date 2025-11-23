#include <stdio.h>

enum Days {
    SUNDAY = 0,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Days d;

    char *dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    printf("Enum Name\tValue\n");
    printf("-------------------------\n");

    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s\t\t%d\n", dayNames[d], d);
    }

    return 0;
}
