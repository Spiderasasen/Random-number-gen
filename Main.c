#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//getting a random number from 1 - 25
int get_number() {
    srand(time(NULL));
    int number = (rand() % 25) + 1;
    return number;
}

//guessing area
void guess(int number) {
    int guess;
    while (guess != number) {
        //asking the player for a guess
        printf("Guess a number between 1 and 25.\n");
        scanf("%d", &guess);

        //checking if the user was correct or not
        if (guess == number) {
            printf("You are correct\n");
        }
        else if (guess < number) {
            printf("Your guess is too low\n");
        }
        else if (guess > number) {
            printf("Your guess is too high\n");
        }
    }
}


// main
int main() {
    int number = get_number();
    guess(number);
    return 0;
}
