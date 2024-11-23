#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
typedef struct {
    char name[50];
    char dest[50];
    int days;
    double price;
    int seats;
}Pkg;
void showPkg(Pkg pkgs[], int n) {
    printf("\nAvailable Travel Packages:\n");
    printf("Name\t\tDest\tDays\tCost\tSeats\n");
    for (int i = 0; i < n; i++) {
        if (pkgs[i].seats > 0) {
            printf("%s\t\t%s\t%d\t%.2f\t%d\n", pkgs[i].name, pkgs[i].dest, pkgs[i].days, pkgs[i].price, pkgs[i].seats);
        }
    }
}
void bookPkg(Pkg pkgs[], int n) {
    char name[50];
    printf("\nEnter the package name you want to book: ");
    getchar();
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0';
    for (int i = 0; i < n; i++) {
        if (strcmp(pkgs[i].name, name) == 0) {
            if (pkgs[i].seats > 0) {
              pkgs[i].seats--;
              printf("Booking successful! Remaining seats for '%s': %d\n", pkgs[i].name, pkgs[i].seats);
               return;
            } else {
            printf("Sorry, no seats available for '%s'.\n", name);
              return;
         }
      }
  }
   printf("Package not found.\n");
}

int main() {
    Pkg pkgs[] = {
        {"Beach", "Karachi", 4, 1000.00, 5},
        {"Hiking", "Kashmir", 1, 18000.00, 9},
        {"Port view", "Gawadar", 3, 200.00, 3},
        {"Desert Safari", "Dubai", 5, 20000.00, 8}
    };
    int n = sizeof(pkgs) / sizeof(pkgs[0]);
    int choice;
    do {
       printf("Travel Package Booking\n");
       printf("1. Show Packages\n");
       printf("2. Book Package\n");
       printf("3. Exit\n");
       printf("Enter choice: ");
       scanf("%d", &choice);    
       switch(choice) {
	    case 1:
                showPkg(pkgs, n);
                break;
           case 2:
                bookPkg(pkgs, n);
                break;
           case 3:
                printf("Thank you.\n");
                break;
           default:
                printf("Invalid choice.Try again.\n");
        }
    } while (choice != 3);
    
    return 0;
}
