def primeOrNot(num):
    if num <= 1:
        return "no it's not prime"
    for i in range(2, num // 2):
        if num % i == 0:
            return "no it's not prime"
    return "yes it's prime"


num = int(input("Enter a number: "))
print(primeOrNot(num))
