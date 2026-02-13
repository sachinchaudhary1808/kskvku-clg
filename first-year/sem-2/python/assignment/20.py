num = int(input("Enter a number: "))

temp = 0
rev = 0
while num > 0:
    rev = (rev * 10) + num % 10
    num //= 10
print(rev)
