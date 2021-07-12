def fib(n): #we define a function fib(n) that will produce a Fibonacci series up to n amount of numbers
    a, b = 0, 1
    while a < n:
        print(a, end=' ')
        a, b = b, a+b
    print()
print('This is a program that calculates the Fibonacci number at nth value provided by the user')
n = int(input("Input an integer value: "))
fib(n)

    