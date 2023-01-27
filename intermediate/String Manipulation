#include <stdio.h>
#include <string.h>

int main() {
    
    //std string len function
    char string[] = "How long is this string?";
    int len;
    len = strlen(string);
    printf("The string:\n");
    puts(string);
    printf("is %d characters long.\n", len);
    
    //buffer for the string and fgets to get the string 
    //importaint to use fgets otherwise buffer could overflow
    char input[64];
    int slen;
    printf("Instructions:");
    fgets(input,64,stdin);
    slen = strlen(input);
    printf("You typed %d characters of instructions.\n", slen);
    
    //string maniuplation 
    char first[] = "I would like to stick";
    char second[] = " this to the end.";
    char buffer[64];
    
    strcpy(buffer,first);
    strcat(buffer,second);
    puts(buffer);
    
return (0);
}
