#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // uses the current time as the seed, causing different runs to produce different sequences, for generation of the number "s" stands for seed for random number generation.

    srand(time(NULL));

    // rand() Generates a massive pseudo-random integer between 0 and RAND_MAX (which is at least 32,767 in C).

    // then we divide it  by 101
    // When you divide any integer by 101, the possible remainders can only be 0 through 100 (101 total possibilities).
    int number = rand() % 101;
    printf("%d", number);
    int no_of_guesses = 5;
    int guessed_number;

    // printf("Random number: %d", number);

    do
    {
        printf("Guess the number: \n");
        scanf("%d", &guessed_number);
        if(guessed_number > number){
            printf("Enter a lower number\n");
        }
        else if (guessed_number< number){
            printf("Enter a higher number\n");
        }
        else{
            printf("Your guess is correct you WIN!!\n");
        }
        no_of_guesses--;
    } while (no_of_guesses != 0 && guessed_number != number);

    return 0;
}