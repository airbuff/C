#include <stdio.h>

void evaluate(int x);

int main()
{
    int i;
    
    printf("Type an integer value: ");
    scanf("%d", &i);
    evaluate(i);
    
    return 0;
}

void evaluate(int x)
{
       if(x>10)
    {
        printf("You typed %d.\n",x);
        printf("%d is greater than 10.\n", x);
    }   
    else if(x<10)
    {
        printf("You typed %d.\n",x);
        printf("%d is less than \n", x);
    }
    else
    {
        printf("you typed %d.\n",x);
        printf("number you typed was %d.\n", x);
    }
}
