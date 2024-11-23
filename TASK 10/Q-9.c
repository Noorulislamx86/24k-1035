#include <stdio.h>
void bubble_sort(int arr[], int size) {
    if (size==1)  return;

for (int i=0; i<size-1; i++) {
    if (arr[i]>arr[i+1]) {
    int temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = temp;
}
   }
    bubble_sort(arr, size-1);
}
void printArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {78, 55, 23, 89, 56, 21, 67, 42};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Original array: \n");
    printArray(arr, n);
    bubble_sort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
