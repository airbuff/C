/*
Auth:Airbuff 281024

Objective: Practice reading user input, working with conditionals, and basic output formatting.
Exercise: Write a program that asks the user to enter their name and age. Then, output a custom greeting with their name. Based on the age, print a message indicating whether the user is a minor (under 18), an adult, or a senior (over 65).
Key Concepts: printf, scanf, if conditions, using char arrays for string input.

Input Validation: Handles invalid or negative ages gracefully and exits if input fails.
Unnecessary Buffer Removed: Eliminates the redundant buffer variable.
Improved Safety: Checks fgets return value and handles errors effectively.
Simpler Logic: Streamlined age-checking logic.

*/
#include <stdio.h>
#include <string.h>


int main() {
    char name[30];
    int age;

    // Prompt for name
    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin)) {
        name[strcspn(name, "\r\n")] = 0; // Remove trailing newline
    } else {
        fprintf(stderr, "Error reading name.\n");
        return 1; // Exit program with error
    }

    // Prompt for age
    printf("Enter your age: ");
    char age_input[10]; // Buffer for numeric input
    if (fgets(age_input, sizeof(age_input), stdin)) {
        if (sscanf(age_input, "%d", &age) != 1 || age < 0) {
            fprintf(stderr, "Invalid age entered.\n");
            return 1; // Exit program with error
        }
    } else {
        fprintf(stderr, "Error reading age.\n");
        return 1; // Exit program with error
    }

    // Greeting
    printf("Hello, %s!\n", name);

    // Age classification
    if (age < 18) {
        printf("You are a child.\n");
    } else if (age <= 65) {
        printf("You are an adult.\n");
    } else {
        printf("You are a senior.\n");
    }

    return 0;
}
