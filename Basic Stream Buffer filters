#include <stdio.h>
#include <ctype.h>

int main()
{
    int buffer;
    
    //changes the buffer to uppercase
    do
    {
        buffer = getchar();
        buffer = toupper(buffer);
        putchar(buffer);
    }
    while(buffer != '\n');
    puts("\n");
    
    //filters only alphabet
    do
    {
        buffer = getchar();
        if(isalpha(buffer))
            putchar(buffer);
    }
    while (buffer != '\n');
    puts("\n");
    
    //filters only digit
    do
    {
        buffer = getchar();
        if(isdigit(buffer))
            putchar(buffer);
    }
    while (buffer != '\n');
    puts("\n");
    
    return (0);
}
