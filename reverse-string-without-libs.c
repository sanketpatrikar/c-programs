#include <stdio.h>

int strlenx(char*);
void reverse_string(int, char*);

int main()
{
    char str[500];
    int string_length;

    printf("Enter string: ");
    fgets(str, sizeof(str) + 1, stdin);

    string_length = strlenx(str);

    reverse_string(string_length, str);
}

int strlenx(char* str)
{
    int len = 0;

    for(int i = 0; str[i] != '\n'; i++)
    {
        len++;
    }
    
    return len;
}

void reverse_string(int length, char* str)
{
    printf("\nReversed string: ");

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");
}