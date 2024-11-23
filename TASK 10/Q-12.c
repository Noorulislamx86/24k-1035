#include <stdio.h>

int ls(int arr[], int size, int target, int index) {
    if (index == size) return -1;
    return (arr[index] == target) ? index : ls(arr, size, target, index + 1);
     }
     int main() {
     int arr[] = {15, 25, 35, 45, 55};
     int size = sizeof(arr) / sizeof(arr[0]);
     int target, idx; 
     printf("Enter the target value to search: ");
     scanf("%d", &target);  
     idx = ls(arr, size, target, 0);  
        if (idx != -1) {
        printf("Target %d found at index %d.\n", target, idx);
    } 
	else
	 {
        printf("Target %d not found.\n", target);
       } 
      return 0;
      }
