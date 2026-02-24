#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//getting a random number from 1 - 25
int get_number() {
    srand(time(NULL));
    int number = (rand() % 25) + 1;
    return number;
}


// main
int main() {
    int number = get_number();
    printf("%d",number);
    return 0;
}
