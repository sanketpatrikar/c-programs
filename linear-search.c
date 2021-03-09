#include <stdio.h>

int main()
{
    int arr_size, find;

    printf("Enter array size: ");
    scanf("%d", &arr_size);

    int arr[arr_size];

    printf("\nInitialize your array.\n\n");
    for (int i = 0; i < arr_size; i++)
    {
        printf("Array[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter value to find: ");
    scanf("%d", &find);

    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] == find)
        {
            printf("\nValue found in array!\n");
            return 0;
        }
    }
    
    printf("\nValue not found in array.\n");
}