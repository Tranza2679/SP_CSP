// SP 6th Silly Sentence Generator
#include <stdio.h>
#include <string.h>

int main(void){
    char name[50];
    char verb[50];
    char adjective[50];
    char location[50];
    char plural[50];
    char creature[50];
    printf("Welcome to Silly Sentence Generator!\n");

    printf("PLease write a name of your choosing:\n");
    scanf("%s", name);

    printf("Please write a verb of your choosing that ends with ing:\n");
    scanf("%s", verb);

    printf("Please write a adjective of your choosing:\n");
    scanf("%s", adjective);

    printf("Please write a location of your choosing:\n");
    scanf("%s", location);

    printf("Please write a plural object of your choosing:\n");
    scanf("%s", plural);

    printf("Please write the name of a creature or animal of your choosing that doesn't end with s:\n");
    scanf("%s", creature);

    printf("%s was %s to the %s %s, where they were furiously pelted by %s by a bunch of %ss\n", name, verb, adjective, location, plural, creature);
    

    return 0;
}