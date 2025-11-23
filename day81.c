#include <stdio.h>

enum Days {
    SUNDAY,     // 0
    MONDAY,     // 1
    TUESDAY,    // 2
    WEDNESDAY,  // 3
    THURSDAY,   // 4
    FRIDAY,     // 5
    SATURDAY    // 6
};

int main() {

    printf("Day\t\tValue\n");
    printf("-----------------------\n");

    printf("SUNDAY\t\t%d\n", SUNDAY);
    printf("MONDAY\t\t%d\n", MONDAY);
    printf("TUESDAY\t\t%d\n", TUESDAY);
    printf("WEDNESDAY\t%d\n", WEDNESDAY);
    printf("THURSDAY\t%d\n", THURSDAY);
    printf("FRIDAY\t\t%d\n", FRIDAY);
    printf("SATURDAY\t%d\n", SATURDAY);

    return 0;
}
