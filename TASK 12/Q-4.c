#include <stdio.h>
#include <stdlib.h>
struct Book {
    char title[70];
    char author[60];
    int P_Y;
 };
struct Library {
    struct Book *books;
    int numBooks;
   };
int main() {
    int numBooks;
    printf("Enter the number of books: ");
    scanf("%d", &numBooks);
    struct Library *library = (struct Library *)malloc(sizeof(struct Library));
    library->numBooks = numBooks;
    library->books = (struct Book *)malloc(numBooks * sizeof(struct Book));
    for (int i = 0; i < numBooks; i++) {
         printf("\nEnter details of book %d:\n", i + 1);
         printf("Title: ");
        scanf("%s", library->books[i].title);
         printf("Author: ");
        scanf("%s", library->books[i].author);
         printf("Publication Year: ");
        scanf("%d", &library->books[i].P_Y);
    }
    printf("\nBooks published after 2000:\n");
         for (int i = 0; i < numBooks; i++) {
        if (library->books[i].P_Y > 2000) {
        printf("%s\n", library->books[i].title);
        }
        }
    free(library->books);
    free(library);
    return 0;
}