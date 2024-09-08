#include <stdio.h>
#include <conio.h>

int main() {
    float taxrate, salary, taxamount, salaryaftertax;
    
    printf("Enter the salary\n");
    scanf ("%f", &salary);
    
    printf("enter the tax rate (in percentage):\n");
    scanf ("%f", &taxrate);
    
    taxamount = (taxrate / 100) * salary;
    
    salaryaftertax = salary - taxamount;
    
    printf("tax amount= %f\n",taxamount);
    printf("salary after tax= %f\n", salaryaftertax);
    
    getch();
    return 0;
}
    
    
