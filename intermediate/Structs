#include <stdio.h>

int main() {
   
    struct bank{
        int account;
        float balance;
    };
    
    struct bank checking;
    struct bank savings={222,5.2};

    printf("Savings account %d has %f.\n", savings.account,savings.balance);
    
    checking.account=1234;
    checking.balance=34243.53;
    
    printf("Checking account %d has a balance of $ %f.\n",
    checking.account, checking.balance);
    
    struct person{
        char name[32];
        int age;
    };
    
    struct person president = {"George Washington",20};
  
    printf("%s was %d years old\n", president.name,president.age);
    
    
    return 0;
}
