#---------------------------------------------#
#   This a program that will read a user      #
#   input and give it back and measure how    #
#   long it was and how many spaces were      # 
#   there                                     # 
#---------------------------------------------#

spaceNum=0

print("This program will take a message and measure it")
output = input("Write a message: ") #python is nice enough to declare it as a string for you

print("Your message is:", output)
print("It is", len(output), "characters long")

#this for loop reads the string as an array
#cycles through looking spaces
#and then prints how many there was

for x in range(0,(len(output)-1)):
    if " " in output[x]:
        spaceNum=spaceNum+1
    else:
        continue

print("And there was", spaceNum, "spaces") #prints out the number of spaces
print("See ya!")
