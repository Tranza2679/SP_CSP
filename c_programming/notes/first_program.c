// SP 6th First Program C
#include <stdio.h>

int main(void){
    char name[20];

    printf("Please write your name: ");
    fgets(name,sizeof(name), stdin);

    printf("Hello %sWelcome to your first C program!", name);

    return 0;

}