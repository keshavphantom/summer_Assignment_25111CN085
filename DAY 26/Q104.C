#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    // Question 1
    printf("1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Patna\n");

    scanf("%d", &answer);

    if(answer == 1)
    {
        score++;
    }

    // Question 2
    printf("\n2. 5 + 3 = ?\n");
    printf("1. 6\n2. 8\n3. 10\n");

    scanf("%d", &answer);

    if(answer == 2)
    {
        score++;
    }

    // Question 3
    printf("\n3. C language was developed before Java?\n");
    printf("1. Yes\n2. No\n");

    scanf("%d", &answer);

    if(answer == 1)
    {
        score++;
    }

    printf("\nYour Score = %d/3", score);

    return 0;
}