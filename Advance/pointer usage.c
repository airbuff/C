#include <stdio.h>

int main(){
    
    int x,y;
    int *ptr;
    
    ptr = &x;
    *ptr = 1234;
    ptr = &y;
    *ptr = 4567;
    
    printf("A is %d and B is %d\n", x, y);
    
      char a,b,c,*p;
  
  a ='A'; 
  p = &a;
  b = *p;
  p = &c;
  *p = 'Z';
  
  printf(" a = %c\n",a);
  printf(" b = %c\n",b);
  printf(" c = %c\n",c);
    
    return 0;
}
