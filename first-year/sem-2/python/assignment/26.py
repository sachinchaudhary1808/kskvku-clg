def largestNum(num1, num2, num3):
    return (
        num1
        if num1 >= num2 and num1 >= num3
        else (num2 if num2 >= num1 and num2 >= num3 else num3)
    )


num1 = int(input("number 1: "))
num2 = int(input("number 2: "))
num3 = int(input("number 3: "))

print(largestNum(num1, num2, num3))
