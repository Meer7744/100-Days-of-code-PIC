#include <stdio.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {

    for (enum Month m = JANUARY; m <= DECEMBER; m++) {
        switch (m) {
            case JANUARY:
            case MARCH:
            case MAY:
            case JULY:
            case AUGUST:
            case OCTOBER:
            case DECEMBER:
                printf("%d - 31 days\n", m);
                break;
            
            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                printf("%d - 30 days\n", m);
                break;

            case FEBRUARY:
                printf("%d - 28 or 29 days (Leap year dependent)\n", m);
                break;
        }
    }

    return 0;
}
