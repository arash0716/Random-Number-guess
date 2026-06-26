#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int guess, count; // guess hocche input,,count hocche jotobar input
simple:
    count = 0;
    srand(time(NULL)); // seed random,,random number generate korbe ,,,different time a
    int random;
    random = (rand() % 50) + 1; // random number er limit set kra hocche 1-100 porjonto
    printf("\n\n-< Random Number Guessing Game >-\n\n\n");
    printf("   The game begins... I've chosen a number between 1 and 50.\n Your mission: Guess it. \n  ");
catch:

    printf("Your number :");
    scanf("%d", &guess);
    
    count++;
    if (guess == random)
    {
        printf("\nYou've guessed it correct!!...Shalar chalu maal\n");
        if (count == 1)
        {
            printf("\nGOATED tui\n");
        }
        else if (count <= 5)
        {
            printf("\nGood game\n");
        }
        else
        {
            printf("\nNoob\n");
        }

        printf("\n \n Once more?\n Try again\n\n");
        goto simple;
    }

    else if (guess > random)
    {
        printf("Lower your number...beshi vabos\n\n");
        goto catch;
    }

    else if (guess < random)
    {
        printf("Higher your number...Motivation kom\n\n");
        goto catch;
    }

    return 0;
}