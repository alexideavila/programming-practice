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
    for a in range(0,(len(x)-1)): #proper indexing because it arrays start at zero
        if " " in x[a]: #looks for spaces
            y=y+1 #the space counter
        else:
            continue #if no spaces, the loop continues
    return y #the full count being returned

spaceNum=0 #declaring the variable

print("This program will take a message and measure it")
output = input("Write a message: ") #python is nice enough to declare it as a string for you

print("Your message is:", output)
print("It is", len(output), "characters long") #len() reads the string length

#Now I call the function which will return the num of spaces
#and I can do it in once single instance, thanks to Python

print("And there was", spaceReader(output, spaceNum), "spaces")
print("See ya!")