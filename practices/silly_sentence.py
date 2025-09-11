#SP 6th Silly sentence generator
print("Hello Welcome To Silly sentence Generator!")
name = input("Please write a name of your choosing!").strip().title()
verb = input("Please write a verb ending with ing of your choosing!").strip().title()
adjective = input("Please write a adjective of your choosing!").strip().title()
location = input("Please write a location of your choosing").strip().title()
plural = input("Please write a plural object of your choosing!").strip().title()
creature =input("please write the name of a creature or animal of your choosing!").strip().title()

print(name,"was",verb,"to the",adjective,location,"where they were furiously pelted with",plural,"by a bunch of",creature + "s.")
print("Thank you for using silly sentence generator!")