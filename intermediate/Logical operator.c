#include <stdio.h>

int main() {

    int a,b;
    a=1;
    b=3;
    if( a < 5 || b >2 )
    {
    puts("this is an OR operator");
    }
    if(a==1 && b==3)
    {
    puts("this is an AND operator");    
    }
    if(a!=b)
    {
    puts("this is a NOT operator");
    }

return (0);
}
