#include <stdio.h>
#include <string.h>

// Define structure
struct Employee {
    int id;
    char name[50];
    float salary;
};

// Function to compare two structures
int areIdentical(struct Employee e1, struct Employee e2) {
    if (e1.id != e2.id)
        return 0;

    if (strcmp(e1.name, e2.name) != 0)
        return 0;

    if (e1.salary != e2.salary)
        return 0;

    return 1;  // All fields match
}

int main() {
    struct Employee emp1, emp2;

    // Input for first structure
    printf("Enter details for Employee 1:\n");
    printf("ID: ");
    scanf("%d", &emp1.id);
    printf("Name: ");
    scanf("%s", emp1.name);
    printf("Salary: ");
    scanf("%f", &emp1.salary);

    // Input for second structure
    printf("\nEnter details for Employee 2:\n");
    printf("ID: ");
    scanf("%d", &emp2.id);
    printf("Name: ");
    scanf("%s", emp2.name);
    printf("Salary: ");
    scanf("%f", &emp2.salary);

    // Check if identical
    if (areIdentical(emp1, emp2))
        printf("\nBoth structures are IDENTICAL.\n");
    else
        printf("\nStructures are NOT identical.\n");

    return 0;
}
