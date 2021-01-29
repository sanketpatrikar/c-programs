#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    char choices[3] = {'r', 'p', 's'};
    char human_choice, computer_choice;

    printf("[1] Rock\t [2] Paper\t [3] Scissors\n\n");
    
    while (i < 1 || i > 3)
    {
        printf("Enter you choice: ");
        scanf("%d", &i);
    }

    human_choice = choices[i - 1];

    printf("\n");
    if (human_choice == 'r')
    {
        printf("You chose: Rock.\n");
    }
    else if (human_choice == 's')
    {
        printf("You chose: Scissors.\n");
    }
    else
    {
        printf("You chose: Paper.\n");
    }

    srand(time(0));

    computer_choice = choices[rand() % (2 - 0 + 1) + 0];

    if (computer_choice == 'r')
    {
        printf("Computer chose: Rock.\n");
    }
    else if (computer_choice == 's')
    {
        printf("Computer chose: Scissors.\n");
    }
    else
    {
        printf("Computer chose: Paper.\n");
    }
    
    printf("\n");
    if (human_choice == computer_choice)
    {
        printf("Tie.\n");
    }
    else if(
             human_choice == 'r' && computer_choice == 's' ||
             human_choice == 'p' && computer_choice == 'r' ||
             human_choice == 's' && computer_choice == 'p'
            )
    {
        printf("You won!\n");
    }
    else
    {
        printf("Computer won.\n");
    }
    
    return 0;
}