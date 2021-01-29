/*
There are 100 doors in a row that are all initially closed.
You make 100 passes by the doors.
The first time through, visit every door and  toggle  the door  (if the door is closed,  open it;   if it is open,  close it).
The second time, only visit every 2nd door   (door #2, #4, #6, ...),   and toggle it.
The third time, visit every 3rd door   (door #3, #6, #9, ...), etc,   until you only visit the 100th door.

Task
Answer the question:   what open are the doors in after the last pass?   Which are open, which are closed?

open doors are 1, 4, 9, 16, 25, 36, 49, 64, 81, 100
*/

#include <stdio.h>
#include <stdbool.h>

struct door
{
    bool open;
};

void toggle(struct door *doors);

const int NUM_OF_DOORS = 100;

int main()
{   
    struct door doors[NUM_OF_DOORS];

    for (int i = 0; i < NUM_OF_DOORS; i++)
    {
        doors[i].open = false;
    }

    toggle(doors);

    for (int i = 0; i < NUM_OF_DOORS; i++)
    {
        if (doors[i].open == true)
        {
            printf("%d, ", i);
        }   
    }
    printf("\n");

    return 0;
}

void toggle(struct door *doors)
{
    for (int i = 1; i <= NUM_OF_DOORS; i++)
    {        
        for (int j = 1; j <= NUM_OF_DOORS; j++)
        {
            if (j % i == 0)
            {   
                if (doors[i].open == true)
                {
                    doors[i].open = false;
                }
                else
                {
                    doors[i].open = true;
                }    
            }
        }
        
    }
}