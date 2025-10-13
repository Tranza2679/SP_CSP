// SP 6th loop and arrays notes

#include <stdio.h>

int main(void){
    int nums[] = {4,684,1,64,2,8,14,36,456,15};
    char candy[5][20] = {"M&M's", "Butterfinger", "Reese's", "Twix", "KitKat"};
    

    for(int x = 0; x < 10; x++){
        printf("%d\n", nums[x]);
    }

    for(int i=0; i<5; i++){
        printf("%s is my favorite candy!\n", candy[i]);
    }

    for(int num =1; num<11; num++){
        printf("%d\n", num);
    }

    

    int goose = 6;
    int count = 0;
    while(count != goose){
        printf("Duck!\n");
        count++;
    }
    printf("Goose!");

    return 0;
}