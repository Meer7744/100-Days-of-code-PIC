#include <stdio.h>

// Nested structure for joining date
struct Date {
    int day;
    int month;
    int year;
};

// Employee structure containing Date
struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joinDate;   // Nested structure
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joinDate.day, &emp.joinDate.month, &emp.joinDate.year);

    // Print details
    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           emp.joinDate.day,
           emp.joinDate.month,
           emp.joinDate.year);

    return 0;
}
