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
elif name == "Tia": #elif means else if 
    print("You are the TA!")
else: 
    print(f"Hello {name}, you are a student!")