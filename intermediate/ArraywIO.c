/*
Auth: airbuff 291024

Objective: Get comfortable with arrays, loops, and basic operations within an array.
Exercise: Create a program that asks the user to enter 5 numbers and stores them in an array. Then, print the numbers back to the user and display their total sum and average.
Key Concepts: Arrays, for loops, summing and averaging values.
*/

#include <stdio.h>


int main(){

    char buffer[30]; //buffer size to get input from user
    int sum; // variable to store the sum of all numbers

    printf("How many numbers do you want to add?\n");
    if (fgets(buffer, sizeof(buffer), stdin)) {
        // Attempt to parse an integer from buffer
        if (sscanf(buffer, "%d", &sum) == 1) {
            printf("You want to add %d numbers together.\n", sum);
        } else {
            printf("Error reading input.\n");
        }
    }
    // initialise array to int size.
    char numbers[sum];
    // reset sum to 0 to store total sum of array
    sum = 0;

    for( int i; i <= sizeof(numbers); i++){

        // local variable as buffer to input values into array
        int local = 0;
        printf("What is your number?\nNo. %d = ",i);

        // get input from user
        if(fgets(buffer, sizeof(buffer), stdin)){

            // input the value into array
           if(sscanf(buffer, "%i", &local)==1){
                    numbers[i]=local; // assin value to array
            }
        }
        sum += numbers[i];
    }

    // print sum
    printf("The sum of the array in total is %d.\n",sum);

    // initialise avg int and assign value
    int avg = sum/sizeof(numbers);
    printf("The avg of the array is %d.\n", avg);

    return 0;
}
