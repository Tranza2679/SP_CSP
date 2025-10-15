// SP 6th Updated Hello World

#include <stdio.h>

void hello(){
    char name[50];
    printf("PLease write your name: ");
    scanf("%s", name);
    printf("Hello %s!\n", name);
}
int main(void){
   hello();
   hello();
   hello();
   hello();
   hello();
   
    return 0;
}