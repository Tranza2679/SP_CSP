// SP 6th String Notes
#include <stdio.h>
#include <string.h>

int main(void){

    char name[] = "Xavier";
    char last_name[25];
    char full_name[100];

    name[2] = 'j';

    printf("Please tell me your last name: \n");
    scanf("%s", last_name);

    printf("[%s]", name);

    strcat(full_name, name);
    printf("[%s]", full_name);

    strcat(full_name, " ");
    printf("[%s]", full_name);
    
    strcat(full_name, last_name);
    printf("[%s]", full_name);

    strcmp(last_name, "LaRose"); //Returns 0 if equal

    printf("%zu\n", strlen(full_name));
    printf("%zu\n", sizeof(full_name));



    return 0;
}