#include <stdio.h>
#include <stdlib.h>   // For malloc()

// Structure definition
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    // Dynamically allocate memory for one structure
    struct Employee *emp = (struct Employee *)malloc(sizeof(struct Employee));

    if (emp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);

    printf("Enter Employee Name: ");
    scanf("%s", emp->name);

    printf("Enter Salary: ");
    scanf("%f", &emp->salary);

    // Print details
    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", emp->id);
    printf("Name: %s\n", emp->name);
    printf("Salary: %.2f\n", emp->salary);

    // Free allocated memory
    free(emp);

    return 0;
}
