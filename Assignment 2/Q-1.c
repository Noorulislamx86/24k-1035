#include <stdio.h>
int main() {
    int arr[5],smallest,smallest_2,i;
    printf("Enter 5 elements:\n");
    for (i=0; i<5; i++)  {
     scanf("%d", &arr[i]);
     while (arr[i]>=9999) {
            printf("Value is out of range!\n Please Enter a number less than 9999: ");
            scanf("%d", &arr[i]);
    }
    }
    smallest = smallest_2 = 9999;
    for (i=0; i<5; i++)  {
        if(arr[i]<smallest) 
		{
            smallest_2 = smallest;
            smallest = arr[i];
        } 
		else if(arr[i]<smallest_2 && arr[i]!=smallest) 
		{
            smallest_2 = arr[i];
        }
    }
    if(smallest_2 == 9999) 
	{
        printf("There is no second smallest element (all the elements are equal).\n");
    } 
	else 
	{
        printf("The second smallest element in array is: %d\n", smallest_2);
    }
    return 0;
}
