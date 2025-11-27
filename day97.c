#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp, empRead;
    FILE *fp;

    // ----- Writing to Binary File -----
    fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    // Write structure to file
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nData written to binary file successfully.\n");

    // ----- Reading from Binary File -----
    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Print the read data
    printf("\n--- Employee Data Read From File ---\n");
    printf("ID: %d\n", empRead.id);
    printf("Name: %s\n", empRead.name);
    printf("Salary: %.2f\n", empRead.salary);

    return 0;
}
