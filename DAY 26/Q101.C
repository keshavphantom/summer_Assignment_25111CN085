#include <stdio.h>

int main()
{
    int secret = 25;
    int guess;

    // Keep asking until correct guess
    while(1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess == secret)
        {
            printf("Congratulations! Correct Guess.");
            break;
        }
        else if(guess < secret)
        {
            printf("Guess a Bigger Number.\n");
        }
        else
        {
            printf("Guess a Smaller Number.\n");
        }
    }

    return 0;
}