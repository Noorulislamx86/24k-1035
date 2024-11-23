#include <stdio.h>
#include <string.h>

    struct Movie {
    char title[100], genre[50], director[50];
    int year;
    float rating;
    };
    void add(struct Movie *m) {
    printf("Enter title, genre, director, year, rating: ");
    scanf("%s %s %s %d %f", m->title, m->genre, m->director, &m->year, &m->rating);
}
    void search(struct Movie movies[], int n, char g[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(movies[i].genre, g) == 0) {
   printf("Title: %s, Director: %s, Year: %d, Rating: %.1f\n", movies[i].title, movies[i].director, movies[i].year, movies[i].rating);
        }
        }
        }
     void display(struct Movie movies[], int n) {
     for (int i = 0; i < n; i++) {
printf("Title: %s, Genre: %s, Director: %s, Year: %d, Rating: %.1f\n", movies[i].title, movies[i].genre, movies[i].director, movies[i].year, movies[i].rating);
    }
    }
int main() {
    struct Movie movies[100];
    int n = 0, choice;
    char genre[50];
    while (1) {
        printf("\n1. Add Movie\n2. Search by Genre\n3. Display All\n4. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
                case 1:
                if (n < 100) {
                    add(&movies[n++]);
                } else {
                    printf("Full\n");
                }
                break;
                 case 2:
                 printf("Enter genre: ");
                 scanf("%s", genre);
                search(movies, n, genre);
                break;
        case 3:
           display(movies, n);
           break;
            case 4:
                return 0;
            default:
                printf("Invalid\n");
        }
    }
}
