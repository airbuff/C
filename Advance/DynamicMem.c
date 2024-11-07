/*
Auth: Airbuff 071124

Objective: Practice dynamic memory allocation and arrays of structs.
Exercise: Write a program that dynamically allocates memory for an array of Card structs. Populate the array with 5 cards, each with a rank and suit, and then print each card using a loop. Ensure you free the memory at the end.
Key Concepts: Dynamic memory (malloc, free), arrays of structs.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int rank;
    char suit;
} Card;

int main(){

    Card *deck = malloc(sizeof(Card)*5);
    if( deck == NULL){
        printf("Memory allocation failed.\n");
        return EXIT_FAILURE;
    }


    // Initialize cards
    for (int i = 0; i < 5; i++) {
        deck[i].rank = i + 2;   // Sample ranks from 2 onward
        deck[i].suit = (i % 2 == 0) ? 'H' : 'S';  // Alternating suits
    }

    // Print cards
    for (int i = 0; i < 5; i++) {
        printf("Card %d: Rank %d, Suit %c\n", i + 1, deck[i].rank, deck[i].suit);
    }

    free(deck);
   /*  for (int i = 0; i < 5; i++) {
        printf("After freeing Card %d: Rank %d, Suit %c\n", i + 1, deck[i].rank, deck[i].suit);
    }
    */
    deck = NULL;
    /*  for (int i = 0; i < 5; i++) {
        printf("After setting to NULL Card %d: Rank %d, Suit %c\n", i + 1, deck[i].rank, deck[i].suit);
        }
    */

    return EXIT_SUCCESS;
}
