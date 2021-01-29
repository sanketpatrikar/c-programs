#include <stdio.h>

int main()
{
    int num, times = 0;
    printf("Enter the number whose table you want to print: ");
    scanf("%d", &num);
    printf("How long do you want the table to be? (From 1 to 5000): ");
    
    while(times < 1 || times > 5000)
    {
        scanf("%d", &times);
    }    

    for (int i = 1; i <= times; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    
}