#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int marks;
};
int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    struct Student *students =(struct Student *)malloc(num_students * sizeof(struct Student));
    if (students=NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (int i=0; i<num_students; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }
    int totalmarks = 0;
    for (int i = 0; i < num_students; i++) {
        totalMarks += students[i].marks;
    }
    double averageMarks=(double)totalmarks/num_students;
    printf("\nAverage marks of the class: %.2f\n", averageMarks);
    free(students);
    return 0;
}