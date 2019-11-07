def sum(x,y):
	return x + y

a=int(input("Please enter a number between 0-9: "))
if a >=10:
	print("Not a number between 0-9!")
	exit()

b=int(input("Please enter another number: "))
if b>=10:
	print("Not a number between 0-9!")
	exit()
else:
	print("The sum of those numbers are: ", sum(a,b))

