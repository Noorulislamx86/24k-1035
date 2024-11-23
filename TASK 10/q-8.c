#include <stdio.h>
#include <string.h>
#define MAX_CARS 100

    typedef struct {
    char mk[50];
    char mdl[50];
    int yr;
    int prc;
    int mlg;
} Car;
    void add(Car cars[], int *cnt);
    void search(Car cars[], int cnt);
    void display(Car cars[], int cnt);
int main() {
    Car cars[MAX_CARS];
    int choice, cnt = 0;
    
    while (1) {
        printf("\n1: Add Car\n2: Search Car\n3: Display All Cars\n4: Exit\nChoice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
             case 1: add(cars, &cnt); break;
              case 2: search(cars, cnt); break;
               case 3: display(cars, cnt); break;
              case 4: printf("Exiting...\n"); return 0;
              default: printf("Invalid choice. Try again.\n");
        }
    }
}
void add(Car cars[], int *cnt) {
    if (*cnt >= MAX_CARS) {
        printf("Max limit reached.\n");
        return;
    }
    
    Car *newCar = &cars[*cnt];
    printf("Enter make: ");
    fgets(newCar->mk, 50, stdin);
    newCar->mk[strcspn(newCar->mk, "\n")] = 0; 
    
    printf("Enter model: ");
    fgets(newCar->mdl, 50, stdin);
    newCar->mdl[strcspn(newCar->mdl, "\n")] = 0; 
    printf("Enter year: ");
    scanf("%d", &newCar->yr);
    printf("Enter price: ");
    scanf("%d", &newCar->prc);
    printf("Enter mileage: ");
    scanf("%d", &newCar->mlg); 
    (*cnt)++;
    printf("Car added.\n");
}
void search(Car cars[], int cnt) {
    if (cnt == 0) {
        printf("No cars in database.\n");
        return;
       }   
    char searchTerm[50];
    printf("Enter make or model: ");
    fgets(searchTerm, 50, stdin);
    searchTerm[strcspn(searchTerm, "\n")] = 0;  
    int found = 0;
    for (int i = 0; i < cnt; i++) {
        if (strcmp(cars[i].mk, searchTerm) == 0 || strcmp(cars[i].mdl, searchTerm) == 0) {
            printf("\nMake: %s\nModel: %s\nYear: %d\nPrice: %d\nMileage: %d\n", 
                   cars[i].mk, cars[i].mdl, cars[i].yr, cars[i].prc, cars[i].mlg);
            found = 1;
        }
}
    if (!found)   {
        printf("No car found with make/model: %s\n", searchTerm);
            }
}
void display(Car cars[], int cnt)   {  
    if (cnt == 0) {
        printf("No cars in database.\n");
        return;
       }
    
    printf("\nAll Cars:\n");
    for (int i = 0; i < cnt; i++) {
        printf("\nMake: %s\nModel: %s\nYear: %d\nPrice: %d\nMileage: %d\n", 
               cars[i].mk, cars[i].mdl, cars[i].yr, cars[i].prc, cars[i].mlg);
      }
}
