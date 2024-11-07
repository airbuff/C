#include <stdio.h>

int main(){
    
    int a,b;
    
    a = 5;
    b = 20;
    
    printf("In this case, variable %c is greater.\n",
    ( a < b ) ? 'a' : 'b' );
    
        int age;
    char *classification;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    classification = ( ( age < 19) ? "a kid" :(age < 65 ? "an adult" : "a geezer"));
     
     printf("You are %s.\n",classification);
    
    return 0;
}
