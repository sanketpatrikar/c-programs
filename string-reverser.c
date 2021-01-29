#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *str = malloc(5000);
    printf("Enter a string: ");
    fgets(str, 501, stdin);

    if (str[0] == '\n')
    {
        printf("ERROR: String not found.\n");
        return 1;
    }

    printf("\nReversed string: ");
    for (int i = strlen(str) - 2; i >= 0; i--) // -2 because strlen returns length including newline, which we need to exclude and also another one because of 0 index of string.
    {
        printf("%c", str[i]);
    }
    printf("\n");

    free(str);
}