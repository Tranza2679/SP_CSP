#SP 6th Financial calculator 

name = input("Hello please write your name").strip().title()
print("Hello", name,"welcome to Financial calculator!")

monthly_income = int(input("Please write your monthly income"))

monthly_rent = int(input("Please write your monthly rent"))

monthly_utilities = int(input("please write your monthly utilities"))

monthly_groceries = int(input("Please write your monthly groceries"))

monthly_transport = int(input("Please write your monthly transport"))

monthly_rentone = monthly_rent 
monthly_renttwo = monthly_rentone
monthly_renttwo /= monthly_income
monthly_renttwo *= 100

print("your monthly rent is",monthly_rent,"This is", round(monthly_renttwo),"% of your income")

monthly_utilitiesone = monthly_utilities
monthly_utilitiestwo = monthly_utilitiesone
monthly_utilitiestwo /= monthly_income
monthly_utilitiestwo *= 100

print("Your monthly utilities are",monthly_utilities,"This is",round(monthly_utilitiestwo),"% of your income")

monthly_groceriesone = monthly_groceries
monthly_groceriestwo = monthly_groceriesone
monthly_groceriestwo /= monthly_income
monthly_groceriestwo *= 100

print("Your monthly groceries are", monthly_groceries,"This is",round(monthly_groceriestwo),"% of your income")

monthly_transportone = monthly_transport
monthly_transporttwo = monthly_transportone
monthly_transporttwo /= monthly_income
monthly_transporttwo *= 100

print("Your monthly transport is",monthly_transport,"This is",monthly_transporttwo,"% of your income")

monthly_incomeone = monthly_income - monthly_rent - monthly_utilities - monthly_groceries - monthly_transport
print("You will have $",monthly_incomeone,"To spend every month!")
print("Thank you for using financial calculator",name)