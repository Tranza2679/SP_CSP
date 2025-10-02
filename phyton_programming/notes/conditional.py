#SP 6th Conditional notes

num = int(input("Tell me a whole number:"))

if num < 10:
    print(f"{num} is a single digit number")
elif num < 100:
    print(f"{num} is a double digit number")
elif num == 4:
    print("That is the winning number!")
else:
    print(f"{num} is a big number!")

name = input("Please tell me your name: ")

if name == "Ms LaRose": #You want to write your conditionals from least likely to most likely
    print("You are the teahcer!")
    if num == 4: 
        print("That is my favorite number!")
elif name == "Tia": #elif means else if 
    print("You are the TA!")
else: 
    if name == "Lucas":
        print("You aare in 6th period!")
    print(f"Hello {name}, you are a student!")

#AND OR NOT

if num >=0 and num < 10: #and means both must be true
    print(f"{num} is a single digit number!")
elif num < 25 or num == 50: #or means only one must be true
    print(f"Wow {num} is a really cool number!")
elif not num < 100: #not checks if the opposite is true
    print(f"{num} is a really large number")
else:
    print(f"You typed in a {num}")

