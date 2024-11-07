#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    
    int *m;
    
    m = (int*)malloc(16 * sizeof(int));
    if( m == NULL)
        puts("Failed to allocate memory");
    else
        puts("Storage for 16 integers allocated");
    
    
    int d;
    
    srand((unsigned)time(NULL));
    d = rand();
    printf("%d is a random number.\n");
    
    int x;
    float rootd;
    
    printf("Type an integer: ");
    scanf("%d",&x);
    rootd = sqrt(abs(x));
    printf("The square root of %d is %f\n", x, rootd);
    

    
    return 0;
}
