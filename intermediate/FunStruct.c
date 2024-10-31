/*
Auth: airbuff 311024

Objective: Learn to define and use structs and basic functions to manage data.
Exercise: Define a struct called Card with properties rank (int) and suit (char). Write a function printCard that takes a Card struct and prints its rank and suit.
Key Concepts: Structs, functions, and passing structs as function arguments.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int rank;
    char suit;
} Card; // define card struct

// prototype functions
void printCard(Card card);
int cardValue(Card card);

int main(){
//set main variables
    char buffer[3];
    int rank;
    char suit;
    int value;
    Card myCard;

    //get input from user
    printf("What is the rank of your card?\n");
    if(fgets(buffer,sizeof(buffer),stdin)){
        //store input in the buffer
        if(sscanf(buffer, "%d", &rank)){
            myCard.rank = rank;
                // save the value of rank into card struct.
        }else{
            printf("Error invalid input.\n");
            // throw exception.
            return EXIT_FAILURE;
        }
    }


    printf("What is the suit of you card?\n");
    if(fgets(buffer,sizeof(buffer),stdin)){
        // store input in the buffer
        if(sscanf(buffer,"%c",&suit)){
            myCard.suit = suit;
                // save the value of suit into card struct
        }else{
            printf("Error invalid input.\n");
            //throw exception
            return EXIT_FAILURE;
        }


    }

    /*
    Card myCard;
    myCard.rank = 7;
    myCard.suit = 'H';  // 'H' for Hearts, for example
    */

    value = cardValue(myCard);

    printCard(myCard);
    printf("Your card's value is %d.\n",value);


    return EXIT_SUCCESS;
}

int cardValue(Card card){
    int value = 0;

    if(card.rank<=9){
        value = card.rank;
        return value;
    }else{
        value = 10;
        return value;
    }
}

void printCard(Card card) {
    printf("Card: Rank %d, Suit %c\n", card.rank, card.suit);
}
