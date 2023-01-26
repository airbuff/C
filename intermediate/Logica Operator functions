#include <stdio.h>

int iscaps(int ch);

int main() {

    int c;
    
    do
    {
        c=getchar();
        if(iscaps(c))
            putchar(c);
    }
    while ( c!='\n');

return (0);
}

int iscaps(int ch)
{
    if(ch <'A'|| ch>'Z')
        return(0);
    else
        return(1);
}
/*
same function but with AND operator instead

int iscaps(int ch)
{
    if(ch >='A'&& ch<='Z')
        return(1);
    else
        return(0);
}
*/
