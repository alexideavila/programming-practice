for n in range(2,50):
    for x in range(2,n):
        #print(n, 'mod', x, 'equals', n % x)
        if n % x == 0:
            #print(n,'equals',x,'*',n//x)
            break
    else:
        #this will print a prime number
        print(n, 'is a prime number')
            
    