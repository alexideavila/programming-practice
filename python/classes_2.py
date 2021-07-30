from typing import Sized

class shirt:
    size = ""
    color = ""
    type = ""
    price = ""

print("This program uses classes to assign variables to an overall object")
print("By using an example of a Shirt Vendor")

vendor = shirt()

cart=0.0
counting=0

while True:
    counting = counting + 1 #this will count how many times the loop is made
    #it will also count the number of items in our cart
    
    vendor.size=input("What size do you wear? (S,M,L,XL...) ")
    vendor.color=input("What color is it? (Red, Blue, Black, Green...) ")
    vendor.type=input("Is it a long or short sleeve? (long, short) ")

    print("The shirt you are ordering is: ",vendor.size,vendor.color,vendor.type)

    if vendor.type in ('long','Long','LONG','l','L'):
        vendor.price=29.99+cart
    elif vendor.type in ('short','s','SHORT','Short','S'):
        vendor.price=24.99+cart
    else:
        print("Invalid Option!")
    
    print("It will cost you: ", format(vendor.price,'.2f'))
    print("And with tax it is: ", format(((vendor.price*0.09)+vendor.price), '.2f'))

    cart = vendor.price #this will store the value of the total cart price without tax
    
    option = input("Would you like to add more to your cart? (Yes/No) ")
    
    if option in ('N','n','no','No','NO'):
        option1=input("Purchase Now? (Yes/No) ")
        
        if option1 in ('yes', 'Yes', 'Y', 'y','YES'):
            print("Thank you for your purchase!")
            
            if counting in (1):
                print("You bought",counting,"shirt!")
                
            else:
                print("You bought", counting, "shirts!")
                
            break
        
        else:
            print("Leave my store!")
            break
        
    elif option in ('Y', 'y', 'yes','Yes','YES'):
        print("Currently have", counting, "item(s) in your cart")
        print("Okay, what other product would you like?")
        continue
    
    else:
        print("Invalid option!")
        break