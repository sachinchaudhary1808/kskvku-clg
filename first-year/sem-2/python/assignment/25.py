def palindrome(num):
    reverse = num[::-1]
    if num == reverse:
        print("it's palindrome")
    else:
        print("it's not palindrome")


num = input("Enter the number: ")
palindrome(num)
