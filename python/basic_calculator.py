def mathFunc(x,y,z):
    x=int(input("What is the 1st number? "))
    y=int(input("And the 2nd number? "))

    if z == 1:
        print("Your sum is: ", x+y)
    elif z == 2:
        print("Your difference is: ", x-y)
    elif z == 3:
        print("You division is: ", x//y)
    elif z == 4:
        print("Your product is: ", x*y)
    else:
        print("Not an option!")

print("This is a basic Calculator for Sums, Differences, Division and Products")
option = int(input("Use 1 for Addition, 2 for Subtraction, 3 for Division and 4 for Multiplication: "))

a=0
b=0

mathFunc(a,b,option)
print("Thank you for using the calculator! See ya!")
#Only prints out integers, sadly