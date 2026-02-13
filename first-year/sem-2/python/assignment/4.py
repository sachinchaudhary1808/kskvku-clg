print("with third variable...........")
a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))

c = a
a = b
b = c
print("swaped numbers:", a, b)

print("without third variable...........")
a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
a, b = b, a
print("swaped numbers:", a, b)
