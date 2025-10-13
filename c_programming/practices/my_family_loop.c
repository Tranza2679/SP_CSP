// SP 6th Family Loop

#include <stdio.h>

int main(void){
    char family[5][20] = {"Victor", "Luisa", "Matias", "Julie", "Claudia"}; 
    for(int i = 0; i<5; i++){
        printf("Hello, %s!\n", family[i]);
    }

    return 0;
}