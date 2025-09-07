 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    srand(time(0));

    int randomNumber= (rand() % 100) +1;
    int no_of_guesses = 0;
    int guessed_number;

    // Print the random number

    do
    {
        printf("enter the number: \n");
        scanf("%d", &guessed_number);
        if (guessed_number > randomNumber)
        {
            printf("decrease the guessed number \n");
        }
        else if (guessed_number < randomNumber)
        {
            printf("increase the guessed number \n");
        }
        else
        {
            printf("congratulations \n");
        }
        no_of_guesses++;

    } while (guessed_number != randomNumber);
    printf("number of guesses are %d \n", no_of_guesses);

        return 0;
}
