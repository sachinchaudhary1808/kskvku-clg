num = int(input("Enter a number: "))
if num <= 1:
    print(num, " is not a prime number")
else:
    flag = 0
    for i in range(2, num // 2):
        if num % i == 0:
            flag = 1

    if flag == 1:
        print(num, "not a prime number")
    else:
        print(num, "is a prime number")
