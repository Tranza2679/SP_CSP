// SP 6th Function notes

#include <stdio.h>

void birthday(char* name, int age){
    printf("Happy Birthday to you\n");
    printf("Happy Birthday to you\n");
    printf("Happy Birthday dear %s\n", name);
    printf("Happy Birthday to you\n");
    printf("Happy BIrthday %s is now %d\n", name, 15);

}

int add(int num_one, int num_two){
    return num_one + num_two;
}

char* get_name(void){
    char *name;
    printf("What is your name: ");
    scanf("%s", name);
    return name;
}

int main(void){
   birthday("Mykel", 15);
   birthday("Lucas", 40);
   birthday("Victoria", 19);
   char* user[] = get_name();
   birthday(user, 5);
   int addition = add(5,4);
   printf("%d\n", addition);
   printf("%d\n", add(50, 37));


    return 0;
}