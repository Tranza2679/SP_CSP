// SP 6th Fizzbuzz

#include <stdio.h>

int main(void){
    

    for(int num=1; num<51; num++){
        if(num % 3 == 0 && num % 5 == 0){
            printf("FizzBuzz/n");
        }else if(num % 3 == 0){
            printf("Fizz\n");
        }else if(num % 5 == 0){
            printf("Buzz\n");
        }else{
            printf("%d\n", num);
        }
    }
    
    return 0;
}