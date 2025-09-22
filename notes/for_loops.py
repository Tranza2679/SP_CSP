#SP 6th Time and for loops notes!

import datetime

current = datetime.datetime.now()
hour = current.hour


print(f"The time is: {current}")
print(f"The hour is: {hour}")

# Lists/ first type of complex data time they are surrounded by []
siblings = ["Alex", "Katie", "Andrew", "Vienna", "Victoria","Treyson", "Jefferson", "Jake"]

print(siblings[3])
print(siblings)
siblings[4] = "Tia" 
siblings[6] = "Xavier"
siblings.remove("Vienna")
print(siblings)

#For loop
for sibling in siblings:
    #print(f"Hello {sibling}")
    print("Hi")

for x in range(20,-11, -1): #the first number is what we start with, second is what we end with and the third is what it counts by
    print(x)

#while loops
#Infinite loop 
#while True:
    #print("Oh No!")

#Proper while loop
i = 1

while i < 21:
    if i % 2 == 0:
        print(f"{i} is even")
    else:
        print(f"{i} is odd")
    i += 1

import random

number = random.randint(1,20)
x = 1
#"print("Goose!")"

while True:
    if number == x:
        print("Goose!")
        break
    else:
        print("Duck")
        x += 1 
#break breaks the loop
    
