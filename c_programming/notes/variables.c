// SP 6th Variables Notes;
/*
this is a comment.
*/
#include <stdio.h>

int main(void){
    int num;
    float pi = 3.14;
    char grade; //will only hold 1 letter 
    char name[20];
    //bool passing = true;
    
    
    // this input lets me get a space
    printf("Tell me your name: ");
    fgets(name,sizeof(name), stdin);

    printf("tell me your letter grade: ");
    scanf("%c", &grade);

    printf("tell me a number: ");
    scanf("%d", &num);

    printf("%d\n", num);
    printf("%s has a %c grade in this class!\n", name, grade);

    return 0;
}