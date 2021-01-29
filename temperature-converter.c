#include <stdio.h>

int main()
{
    int n;
    float temperature;

    printf("Choose unit:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n\n");

    printf("Enter choice: ");
    scanf("%d", &n);

    if (n < 1 || n > 3)
    {
        printf("Wrong input.\n");
        return 1;
    }

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    printf("\n");
    switch(n)
    {
        case 1:
            printf("%.2f degrees Celsius converted is:\n", temperature);
            printf("%.2f degrees Fahrenheit.\n", temperature * 9 / 5 + 32);
            printf("%.2f degrees Kelvin.\n", temperature + 273.15);
            break;

        case 2:
            printf("%.2f degrees Fahrenheit converted is:\n", temperature);
            printf("%.2f degrees Celsius.\n", (temperature - 32) * 5 / 9);
            printf("%.2f degrees Kelvin.\n", (temperature - 32) * 5 / 9 + 273.15);
            break;

        case 3:
            printf("%.2f degrees Kelvin converted is:\n", temperature);
            printf("%.2f degrees Celsius.\n", temperature - 273.15);
            printf("%.2f degrees Fahrenheit.\n", (temperature - 273.15) * 9 / 5 + 32);
            break;
    }
    return 0;
}