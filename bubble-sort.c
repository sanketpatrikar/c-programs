#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int arr_size;

    printf("Enter array size: ");
    scanf("%d", &arr_size);

    int arr[arr_size];

    srand(time(0));

    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = (rand() % (100 - 1 + 1)) + 1;
    }
    
    printf("\nOriginal array: ");
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int counter = 1;
    int sorted_elements = 0;

    while (counter != 0)
    {  
        if (counter != 0)
        {            
            counter = 0;
        }

        for (int i = 0; i < arr_size - 1 - sorted_elements; i++)
        {
             //Set to one so last element doesn't get compared to one beyond it.
            if (arr[i] > arr[i + 1])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                counter++;

                printf("\nSorted array: ");

                for (int i = 0; i < arr_size; i++)
                {
                    printf("%d ", arr[i]);
                }
                
                printf("\n");
            }
        }  
        if (counter != 0)
        {
            sorted_elements++;
        }
       
    }
}