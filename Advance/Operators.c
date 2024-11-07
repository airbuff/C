#include <stdio.h>

int main() {
            
        int x,y;
        
        printf("Enter first value: ");
            scanf("%d",&x);
        printf("Enter Second value:");
            scanf("%d",&y);
            
        printf("x=%d,y=%d\n", x, y);
        
        x +=5;
        y +=5;
        
        printf("new x = %d\n", x);
        printf("new y = %d\n", y);
        
        x /=3;
        y /=3;
   
        printf("new x after division= %d\n", x);
        printf("new y after division= %d\n", y);     
            
    return 0;
}
