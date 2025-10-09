// SP 6th Name decorator
#include <stdio.h>
#include <string.h>

int main(void){
    char name[50];
    char decorated_name[100];

    printf("Welcome to Name decorator! Please write your first name\n");
    scanf("%s", name);

    strcat(decorated_name,"*(^v^)*");
    strcat(decorated_name,name);
    strcat(decorated_name,"*('w')*");
    printf("decorated name: %s", decorated_name);


    return 0;
}