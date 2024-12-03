#include <stdio.h>

struct Employee {
    int employeeCode;
    char employeeName[20];
    int dateOfJoining; 
};

void values(struct Employee employees[], int i) {
    printf("Enter details for Employee %d:\n", i+1);
    printf("Employee Code: ");
    scanf("%d",&employees[i].employeeCode);
    printf("Employee Name: ");
    scanf(" %s", employees[i].employeeName);
    printf("Date of Joining (YYYYMMDD): ");
    scanf("%d",&employees[i].dateOfJoining);
}

void Tenure(struct Employee employees[], int size) {
    int currentDate;
	int count = 0;

    printf("\nEnter the current date (YYYY MM DD): ");
    scanf("%d", &currentDate);

    printf("\nEmployees with more than 3 years of tenure:\n");
    printf("Code\tName\t\tDate of Joining\tTenure (years)\n");

    for (int i = 0; i < size; i++) {
        int yearOfJoining = employees[i].dateOfJoining/10000;
        int currentYear = currentDate/10000;

        int tenure = currentYear-yearOfJoining;

        if (tenure > 3) {
            printf("%d\t%s\t\t%d\t\t%d\n",
                   employees[i].employeeCode,
                   employees[i].employeeName,
                   employees[i].dateOfJoining,
                   tenure);
            count++;
           }
     }

    printf("\nTotal Employees with more than 3 years of tenure are %d\n",count);
}

int main() {
    struct Employee employees[4];

    for (int i=0; i<4; i++) {
        values(employees, i);
    }

    Tenure(employees, 4);

    return 0;
}
