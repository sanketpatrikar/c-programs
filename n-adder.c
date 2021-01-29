// Write a program that asks the user for a number n and prints the sum of the numbers 1 to n
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a digit to be added from n upto itself: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("%d + %d = %d\n", n, i, n + i);
    }
}