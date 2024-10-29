#include <stdio.h>
#define max 4
#define Meals 3

int main (){
    
 float temp[max]= {512.41, 545.5, 522.4, 545.2};
 
 printf("Random Numbers");
 for(int x =0; x<max; x++)
    printf(" are %d: %.4f\n",max, temp[x]);
    
int calories[Meals];
int total = 0;

puts("calorie counter");
for(int x=0; x<Meals;x++)
{
    scanf("%d", &calories[x]);
    total = total + calories[x];
}
 printf("You had a total of %d calories. \n", total);
 

    return (0);
}
