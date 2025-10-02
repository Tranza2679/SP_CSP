#SP 6th Updated Financial Calculator 

print("Hello! Welcome to financial calculator!")

def monthly(finances):
    finances = int(input("What is your monthly"+ " " +finances))
    return finances 


income = monthly("income")
rent = monthly("rent")
utilities = monthly("utilities")
groceries = monthly("groceries")
transport = monthly("transport")


def calculate(result):
    result = result/income*100
    return result 
    

calculate(rent) 
print(f"Your monthly rent is {rent} and it is {calculate(rent)}% of your income")
calculate(utilities)
print(f"Your monthly utilites are {utilities} and it is {calculate(utilities)}% of your income")
calculate(groceries)
print(f"Your monthly groceries are {groceries} and it is {calculate(groceries)}% of your income")
calculate(transport)
print(f"Your monthly transport is {transport} and it is {calculate(transport)}% of your income")
print("Thank you for using Financial calculator!")