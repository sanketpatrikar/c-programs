/* Modify the previous program such that only multiples of three or five are considered in the sum, e.g. 3, 5, 6, 9, 10, 12, 15 for n=17 */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a digit to be added from n upto itself: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            printf("%d + %d = %d\n", n, i, n + i);   
        }
    }
}