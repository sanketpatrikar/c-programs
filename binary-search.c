#include <stdio.h>

void binary_search(int arr_size, int arr[], int num);

int main()
{
    int arr_size = 0, num_to_find;

    while (arr_size < 1 || arr_size > 99999)
    {
        printf("Size of array: ");
        scanf("%d", &arr_size);

        if (arr_size < 1)
        {
            printf("ERROR: Array is too small for Binary Search.\n\n");
        }
        else if (arr_size > 99999)
        {
            printf("ERROR: Array is too big! Limit is 99,999\n\n");
        }   
    }

    int arr[arr_size];

    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = i;
    }
    
    printf("\nEnter number to find: ");
    scanf("%d", &num_to_find);

    binary_search(arr_size, arr, num_to_find);
}

void binary_search(int arr_size, int arr[], int target)
{
    int iterations = 0;

    int arr_start = arr[0];
    int arr_end = arr[arr_size - 1];
    int mid_point = (arr_end + arr_start) / 2;

    while (arr_start <= arr_end)
    {
        iterations++;

        if (arr[mid_point] == target)
        {
            printf("\nTarget found in array!\n");
            printf("\nDid %d comparisons.\n", iterations);

            return;
        }
        else if (mid_point > target)
        {
            arr_end = mid_point - 1;
        }
        else if (mid_point < target)
        {
            arr_start = mid_point + 1;
        }

        mid_point = (arr_end + arr_start) / 2;
    }

    printf("\nTarget not found in array.\n");
    printf("\nDid %d comparisons.\n", iterations);
}