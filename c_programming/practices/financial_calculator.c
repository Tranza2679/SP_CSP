//SP 6th Financial Calculator 
#include <stdio.h>

int main(void){
    float monthly_income = 0;
    float monthly_rent = 0;
    float monthly_utilities = 0;
    float monthly_groceries = 0;
    float monthly_transport = 0;

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

    float monthly_rent2 = monthly_rent/monthly_income*100;
    float monthly_utilities2 = monthly_utilities/monthly_income*100;
    float monthly_groceries2 = monthly_groceries/monthly_income*100;
    float monthly_transport2 = monthly_transport/monthly_income*100;

    printf("Your monthly rent is %2.2f and is %2.2f %% of your income\n", monthly_rent, monthly_rent2);
    printf("Your monthly rent is %2.2f and is %2.2f %% of your income\n", monthly_utilities, monthly_utilities2);
    printf("Your monthly rent is %2.2f and is %2.2f %% of your income\n", monthly_groceries, monthly_groceries2);
    printf("Your monthly rent is %2.2f and is %2.2f %% of your income\n", monthly_transport, monthly_transport2);


    float monthly_income2 = monthly_income*0.1;
    int amount_left = monthly_income-monthly_rent-monthly_utilities-monthly_groceries-monthly_transport;
    printf("You should save at least %2.2f and that is 10%% of your income\n", monthly_income2);
    printf("You have %d left to spend!",amount_left);



    return 0;
}