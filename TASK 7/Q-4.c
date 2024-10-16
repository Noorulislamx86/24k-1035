#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i=0; i<n;i++) {
        scanf("%d", &arr[i]);
    }
    int count[n]; 
    for (int i=0; i<n; i++) {
        count[i] = 0;
    }
    for (int i=0; i<n; i++) {
        count[arr[i]]++;
    }
    printf("Elements occurring more than once: ");
    int element=0;
    for (int i = 0; i < n; i++) {
        if (count[i] > 1) {
            printf("%d ", i);
            element=1;
    }
    }
   if (!element) {
        printf("Nill");
    }
    printf("\n");
    return 0;
  }
