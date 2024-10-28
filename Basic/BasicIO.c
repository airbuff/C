/*
Auth:Airbuff 281024

Objective: Practice reading user input, working with conditionals, and basic output formatting.
Exercise: Write a program that asks the user to enter their name and age. Then, output a custom greeting with their name. Based on the age, print a message indicating whether the user is a minor (under 18), an adult, or a senior (over 65).
Key Concepts: printf, scanf, if conditions, using char arrays for string input.

*/
#include <stdio.h>
#include <string.h>

int main(){
    char buffer[30];
    char name[30];
    int age;

    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin); // Scans name and stores it in memory;
    name[strcspn(name, "\r\n")] = 0; // remove the trailing new line character from the array

    printf("Enter you age: ");
        if (fgets(buffer,sizeof(buffer),stdin)){
            // using sscanf to parse int from buffer
            if(sscanf(buffer, "%d", &age)==1){
        printf("Age recorded.\n");
            }else{
                printf("Error reading input.\n");
            }
        } // Scans age and stores it in buffer parse the buffer to int

    printf("Hello, %s!\n",name);

    if(age<18){
        printf("You are a child.\n");
    }else if(age<=65){
        printf("You are an adult.\n");
    }else {
        printf("You are a senior.\n");
    }

    return 0;
}
