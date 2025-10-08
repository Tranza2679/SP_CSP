//SP 6th Financial Calculator 
#include <stdio.h>

int main(void){
    float monthly_income = 0;
    int monthly_rent = 0;
    int monthly_utilities = 0;
    int monthly_groceries = 0;
    int monthly_transport = 0;

    printf("Hello user welcome to financial calculator\n");
    printf("Please write your monthly income\n");
    scanf("%f", &monthly_income);
    
    printf("Please write your monthly rent\n");
    scanf("%f", &monthly_rent);

    printf("Please write your monthly utilies cost\n");
    scanf("%f", &monthly_utilities);

    printf("Please write your monthly groceries cost\n");
    scanf("%f", &monthly_groceries);

    printf("Please write your monthly transport cost\n");
    scanf("%f", &monthly_transport);

    float monthly_income2 = monthly_income*0.1;
    printf("You should save at least %f and that is 10%% of your income");


    return 0;
}