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
    printf("%d", number);
}


// main
int main() {
    int number = get_number();
    guess(number);
    return 0;
}
