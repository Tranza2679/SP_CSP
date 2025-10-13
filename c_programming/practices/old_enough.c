// SP 6th Old Enough
#include <stdio.h>

int main(void){

    int age;
    printf("Hello to this program! Please type your age:\n ");
    scanf("%d", &age);
    if(age >= 18){
        printf("You are old enough to vote!\n");
    }else if(age >=16){
        printf("You are old enough to drive!\n");
    }else if(age >= 15){
        printf("You are old enough to get a learners permit!\n");
    }else if(age <= 14 && age >= 5){
        printf("You are old enough to go to school!\n");
    }else{
        printf("You are too young to use this program!\n");
    }
    return 0;
}