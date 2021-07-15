#---------------------------------------------#
#   This a program that will read a user      #
#   input and give it back and measure how    #
#   long it was and how many spaces were      # 
#   there                                     # 
#---------------------------------------------#

#this for loop reads the string as an array
#cycles through looking spaces
#and then prints how many there was

def spaceReader(x,y):
    #x is the string
    #y is the num of spaces
    for a in range(0,(len(x)-1)):
        if " " in x[a]:
            y=y+1
        else:
            continue
    return y

spaceNum=0

print("This program will take a message and measure it")
output = input("Write a message: ") #python is nice enough to declare it as a string for you

print("Your message is:", output)
print("It is", len(output), "characters long")


print("And there was", spaceReader(output, spaceNum), "spaces") #prints out the number of spaces
print("See ya!")
