#include <stdio.h>
#include <stdlib.h>
int main() {
    int size;
        printf("enter the size of the array: ");
        scanf("%d", &size);
        int *arr = (int *)malloc(size *sizeof(int));
        if (arr == NULL) {
        printf("memory allocation failed.\n");
        return 1;
    }
        printf("enter the elements of the array:\n");
        for (int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
        int sum = 0;
        for (int i=0; i<size; i++) {
        sum += arr[i];
    }
        printf("sum of the elements: %d\n", sum);
        free(arr);
        return 0;
}