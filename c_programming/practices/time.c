//SP 6th Time of Day

#include <stdio.h>

int main(void){
    int time;

    printf("Hello user, please type the hour in military time:\n ");
    scanf("%d", &time);

    if(time >= 18 && time <= 24){
        printf("Hello the time is %d, Good Evening!\n", time);
    }else if(time >= 12 && time < 18){
        printf("Hello the time is %d, Good Afternoon!\n", time);
    }else if(time >= 1 && time < 12){
        printf("Hello the time is %d, Good Morning\n!", time);
    }else{
        printf("PLease type a actual hour!\n");
    }

    return 0;
}