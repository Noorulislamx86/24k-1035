#include <stdio.h>
#include <limits.h>
int max_and_min()  {
    int f;
    printf("Enter the size of array : ");
    scanf("%d", &f);
    int arr[f];
    for (int i=0; i<f; i++)   {
    printf("Enter arr[%d]: ", i);
    scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    for (int i=0; i<f; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    int min =INT_MAX;
    for (int j = 0; j < f; j++)   {
        if (arr[j]<min)
    {
            min=arr[j];
        }
    }
    printf("Maximum element in the array : %d\n", max);
    printf("Minimum element in the array : %d", min);
    return 0;
}
    int main()  {
    max_and_min();
    return 0;
}
