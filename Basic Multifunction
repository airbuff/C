#include <stdio.h>

int big(int x, int y);
void isBig(int Large);

int main()
{
    int x,y,j;
    
    printf("Type in two integers seperated by space:");
    scanf("%d %d",&x,&y);
    j=big(x,y);
    if(x == j)
        isBig(x);
    else
        isBig(y);
 
 return 0;       
}

int big(int x, int y){
    if(x>y)
    return x;
    else
    return y;
}

void isBig(int Large){
    printf("%d is bigger", Large);
}
