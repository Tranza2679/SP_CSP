#SP 6th Function notes


import random


def welcome():
    name = input("What is your name\n")
    print(f"Hello {name}!")

print(f"The function is over!")

welcome()


def add(number,numer_two): #parameters are given when we define the function 
    number =number + num_two
    print(number)

num_one = 12
num_two = 14
add(num_one, num_two)#arguments are given when we call the function
add(4,8)
add(9,700)
add(87, 45)

def clean(info):
    return info.strip().lower()

name = input("What is your name?")
quest = input("What is your quest?")
color = input("What is your favorite color?")

print(f"Hello, {clean(name)}. I have heard you are trying to {clean(quest)}, that is super cool! Are you sure {clean(color)} is your favorite color?")
def believe(sentence):
   length = len(sentence)
   spot_one = random.randint(0, length - 1)
   spot_two = random.randint(0, length - 1)
   spot_three = random.randint(0, length - 1)
   full_sentence = sentence.split(" ")
   full_sentence.insert(spot_one, "Believe it!")
   full_sentence.insert(spot_two, "Believe it!")
   full_sentence.insert(spot_three, "Believe it!")
   sentence = full_sentence.join("")
   return sentence

new_sentence = believe("This quick brown fox jumps over the lazy dog!")
print(new_sentence)
print
