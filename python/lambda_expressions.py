def make_incrementor(n):
    return lambda x: x + n

print("This program is an incremantor starting from 1")

j = int(input("How many iterations would you like? "))

f = make_incrementor(1)
for n in range(j):
    print(f(n), end= ' ')