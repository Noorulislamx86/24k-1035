#include <stdio.h>

void initializeEngagementMatrix(int matrix[][5], int numusers) {
    for (int i = 0; i < numusers; i++) {
        printf("Enter User %d engagement scores (5 categories):\n", i + 1);
        for (int j = 0; j < 5; j++) {
            do {
                printf("Category %d: ", j + 1);
                scanf("%d", &matrix[i][j]);
            } while (matrix[i][j] < 0 || matrix[i][j] > 10); 
        }
    }
}

void displayEngagementMatrix(int matrix[][5], int numusers) {
	printf("\n--------------------------------------\n");
    printf("|          Engagement Matrix         |");
	printf("\n--------------------------------------\n");
    for (int i = 0; i < numusers; i++) {
        printf("| User %d |: ", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("| %d |", matrix[i][j]);
        }
        printf("\n");
    }
	printf("\n--------------------------------------\n");

}

int main() {
    int numusers = 3;
    int engamatrix[10][5]; 

    initializeEngagementMatrix(engamatrix, numusers);
    displayEngagementMatrix(engamatrix, numusers);

    return 0;
}
