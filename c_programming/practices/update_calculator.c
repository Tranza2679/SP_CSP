// SP 6th Updated FInancial Calculator
#include <stdio.h>


float find_percentage(float results, float income ){
    return results/income*100;
}

float monthly_finances(char* finance1){
    float finance2;
    printf("What is your monthly %s\n", finance1);
    scanf("%f", &finance2);
    return finance2;
}
float income_precentage(float income){
    return income*0.1;
}

int main(void){
    float monthly_income = monthly_finances("income");
    float monthly_rent = monthly_finances("rent");
    float monthly_utilities = monthly_finances("utility cost");
    float monthly_groceries = monthly_finances("groceries cost");
    float monthly_transport = monthly_finances("transport cost");
    float precentage_income = income_precentage(monthly_income);
    float precentage_rent = find_percentage(monthly_rent, monthly_income);
    float precentage_utilities = find_percentage(monthly_utilities, monthly_income);
    float precentage_groceries = find_percentage(monthly_groceries, monthly_income);
    float precentage_transport = find_percentage(monthly_transport, monthly_income);
    float final_amount = monthly_income - monthly_rent - monthly_utilities - monthly_transport - monthly_groceries;
    printf("Your monthly rent is %f and it is %f%% of your income!\n", monthly_rent, precentage_rent);
    printf("Your monthly utility cost is %f and it is %f%% of your income!\n", monthly_utilities, precentage_utilities);
    printf("Your monthly rent is %f and it is %f%% of your income!\n", monthly_groceries, precentage_groceries);
    printf("Your monthly rent is %f and it is %f%% of your income!\n", monthly_transport, precentage_transport);
    printf("You shoud save at least %f and that is 10%% of your income!\n", precentage_income);
    printf("You have %f to spend every month!\n", final_amount);
  
    return 0;
}