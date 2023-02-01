#include <stdio.h>
#include <stdlib.h>

#define size 64

int main(){
    
    char *name;
    
    name=malloc(sizeof(char)*size);
    //checking the malloc
    if( name==NULL){
        puts("mem alloc failed"); 
        return 1;
    }
    
    printf("enter name: ");
    fgets(name,size,stdin);
    printf("hello %s", name);
    
    
    //bad practice without checking if the malloc was successful
     do
 {
    puts("Enter name");
   fgets(name,size,stdin);
    printf("hello %s", name);
    return 0;
 }
 while(*name);
 puts("\n");
 
    
    
    
    return 0;
}
