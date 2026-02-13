num = input("Enter the number: ")
count = len(num)

temp = 0
for i in num:
    temp += int(i) ** count
if temp == int(num):
    print(num, "is an armstrong")
else:
    print(num, "is not an armstrong")
