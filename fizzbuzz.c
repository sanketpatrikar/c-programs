#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 100; i++)
    {
        if (!(i % 3))
            printf("Fizz");
        if (!(i % 5))
            printf("Buzz");
        if ((i % 3) && (i % 5))
            printf("%d", i);
        printf("\n");
    }
}