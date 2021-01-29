#include <stdio.h>

int main (void)
{
    int height = 0;

    while (height < 1 || height > 41)
    {
        printf("Enter height between 1-8: ");
        scanf("%d", &height);
    }

    for (int i = 0, m = height; i < m; i++)
    {
        for (int j = 0, n = height - i - 1; j <= n; j++)
        {           
            printf(".");
        }
        for (int k = height + i + 1, o = height; k > o; k--)
        {
            if (i + 1 > height/2)
            {
                break;
            }
            printf("#");
        }
        for (int l = height + i, o = height; l > o; l--)
        {
            if (i + 1 > height/2)
            {
                break;
            }
            printf("#");
        }
        for (int m = height - (height / 2) + i + 1, o = height; m > o; m--)
        {
            if (i < height/2)
            {
                break;
            }
            printf("#");
        }
        for (int n = height - (height/2) + i, o = height; n > o; n--)
        {
            if (i < height/2)
            {
                break;
            }
            printf("#");
        }
        for (int p = 0, n = height / 2; p < n / 2; p--)
        {
            
        }
        

        printf("\n");
    }
}