def factorial(num):
    total = 1
    for i in range(1, num + 1):
        total *= i
    return total


num = int(input("Enter a num: "))
print(factorial(num))
