num1 = int(input("enter the first number: "))
num2 = int(input("enter the second number: "))

if num1 > num2:
    print(num1, "is greater")
elif num2 > num1:
    print(num2, "is greater")
else:
    print("both", num1, "and", num2, "are same")
