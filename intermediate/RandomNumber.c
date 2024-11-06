/*
Auth: Airbuff 061124

Objective: Practice using random numbers and control flow for simple game logic.
Exercise: Create a basic number guessing game. Generate a random number between 1 and 10, then prompt the user to guess the number. Provide feedback on whether their guess was correct or incorrect and let them keep guessing until they get it right.
Key Concepts: rand(), srand(), looping until a condition is met, handling user input.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


int main(){

    char input[5];
    bool a = true;
    srand(time(NULL));
    int rand_num = (rand() % ( 50 ) + 1 );

    while(a){

    printf("Guess the number it's between 1 & 50\n");

    if(fgets(input, sizeof(input), stdin)){

             int guess = atoi(input) ;
           /*  printf("rand is %d\n",rand_num);
            printf("your guess is %d\n",guess);
                   used to trouble shoot             */
            if(rand_num > guess ){
            printf("Higher.\n");

        }else if(rand_num < guess){

                printf("Lower.\n");
        }else{
            printf("You guessed it right.\n");
            a = false;
        }

    }else {
        printf("Unexpected Input.\n");
    }
    }

    return EXIT_SUCCESS;
}
