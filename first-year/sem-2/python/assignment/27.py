def sumAndProduct(num):
    sumOfDigit = 0
    MultiplicationOfDigit = 1
    for i in num:
        sumOfDigit += int(i)
        MultiplicationOfDigit *= int(i)
    return "sum", sumOfDigit, "multiplication:", MultiplicationOfDigit


num = input("Enter num: ")
print(sumAndProduct(num))
