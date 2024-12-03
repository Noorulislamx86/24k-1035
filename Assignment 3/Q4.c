#include <stdio.h>

void userRatings(int ratings[][10], int numEmployees, int numperiods) {
    for (int i = 0; i < numEmployees; i++) {
        printf("Enter ratings for Employee %d (1-10):\n", i+1);
        for (int j = 0; j <numperiods; j++) {
            do {
                printf("Period %d: ",j + 1);
                scanf("%d", &ratings[i][j]);
            } while (ratings[i][j] < 1 || ratings[i][j] > 10); 
        }
    }
}

void performance(int ratings[][10], int numEmployees, int numperiods) {
    printf("\nEmployee Ratings:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("Employee %d: ", i + 1);
        for (int j = 0; j < numperiods; j++) {
            printf("%d ", ratings[i][j]);
        }
        printf("\n");
    }
}

int Employeeoftheyear(int ratings[][10], int numEmployees, int numperiods) {
    int maxindex= 0, maxscore = 0;

    for (int i = 0; i < numEmployees; i++) {
        int total = 0;
        for (int j = 0; j < numperiods; j++) {
            total += ratings[i][j];
        }
        if (total > maxscore) {
            maxscore = total;
            maxindex = i;
        }
    }
    return maxindex;
}

int Highestratedperiod(int ratings[][10], int numEmployees, int numperiods) {
    int maxindex = 0, maxscore = 0;

    for (int j = 0; j < numperiods; j++) {
        int total = 0;
        for (int i = 0; i < numEmployees; i++) {
            total += ratings[i][j];
        }
        if (total > maxscore) {
            maxscore = total;
            maxindex = j;
        }
    }
    return maxindex;
}

int main() {
    int numEmployees = 3;
	int numperiods = 4;
    int ratings[10][10]; 

    userRatings(ratings, numEmployees, numperiods);
    performance(ratings, numEmployees, numperiods);

    int topEmployee = Employeeoftheyear(ratings, numEmployees, numperiods);
    printf("\nEmployee of the Year: Employee %d\n", topEmployee + 1);

    int topperiod = Highestratedperiod(ratings, numEmployees, numperiods);
    printf("Best Rated Period: Period %d\n", topperiod + 1);

    return 0;
}
