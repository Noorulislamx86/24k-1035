#include <stdio.h>
#include <string.h>

void Inventory(char inventory[][50][50], int numspecies) {
    for (int i = 0; i <numspecies; i++) {
        printf("Enter %d specie name : ", i+1);
        scanf(" %s", inventory[i][0]); 
    }
}

void addsupplies(char inventory[][50][50], int numspecies, int suppliesperspecies) {
    for (int i = 0; i < numspecies; i++) {
        printf("\nEnter supplies for %s:\n", inventory[i][0]);
        for (int j = 1; j <= suppliesperspecies; j++) {
            printf("Supply %d: ", j);
            scanf(" %s", inventory[i][j]);
        }
    }
}

void displayInventory(char inventory[][50][50], int numspecies, int suppliesperspecies) {
	printf("\n----------------------");
    printf("\n| Pet Shop Inventory |\n");
    printf("-----------------------\n");
    for (int i = 0; i < numspecies; i++) {
        printf("Species: %s\n", inventory[i][0]);
        printf("Supplies: ");
        for (int j = 1; j <=suppliesperspecies; j++) {
            printf("%s ", inventory[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int numspecies = 3, suppliesperspecies = 3;
    char inventory[10][50][50]; 
    Inventory(inventory, numspecies);
    addsupplies(inventory, numspecies, suppliesperspecies);
    displayInventory(inventory, numspecies, suppliesperspecies);

    return 0;
}
