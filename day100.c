#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s;              // structure variable
    struct Student *ptr = &s;      // pointer to structure

    // Modify structure members using -> operator
    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter age: ");
    scanf("%d", &ptr->age);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Display structure members using -> operator
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", ptr->name);
    printf("Age   : %d\n", ptr->age);
    printf("Marks : %.2f\n", ptr->marks);

    return 0;
}
