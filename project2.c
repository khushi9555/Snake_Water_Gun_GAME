//                                            program for snake , water and gun game 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakewatergun(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    else if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }
}
int main()
{
    char you, comp;
    char ans;
    srand(time(0));
    int num;
    num = rand() % 100 + 1;
    // generate a number between 1 and 100
    if (num <= 33)
    {
        comp = 's';
    }
    else if (num > 33 && num <= 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    do
    {
        printf("enter 's' for snake,'w' for water and 'g' for gun to play the  game \n ");
        scanf(" %c", &you);
        int result = snakewatergun(you, comp);
        printf("you entered %c and computer entered %c \n", you, comp);
        if (result == 0)
        {
            printf("**************                                   GAME OVER                    ******************* \n");
        }
        else if (result == 1)
        {
            printf("***************                                YOU WIN THE GAME                 ********************* \n");
        }
        else
        {
            printf("***************                                YOU LOSS THE GAME                 ********************\n");
        }

        printf("want to play again (y/n) : ");
        scanf(" %c", &ans);

    } while (ans == 'y');
    
    return 0;
}