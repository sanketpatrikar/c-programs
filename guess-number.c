#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int num, guess;

    srand(time(0));

    num = (rand() % (10 - 1 + 1)) + 1;

    printf("Guess my number: ");
    scanf("%d", &guess);

    while (guess < 1 || guess > 10)
    {
        printf("Choose a number between 1 & 10!\n");
        printf("\nGuess my number: ");
        scanf("%d", &guess);
    }

    if (num == guess)
    {
        printf("Correct guess!\n");
    }
    else if (num > guess)
    {
        printf("Too low! My number was %d.\n", num);
    }
    else
    {
        printf("Too high! My number was %d.\n", num);
    }
}