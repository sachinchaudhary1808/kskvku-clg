m = int(input("Enter marks out of 100: "))
if m >= 90:
    grade = "A+"
elif m >= 80:
    grade = "A"
elif m >= 70:
    grade = "B+"
elif m >= 60:
    grade = "B"
elif m >= 50:
    grade = "C"
elif m >= 40:
    grade = "D"
elif m >= 33:
    grade = "E"
else:
    grade = "F"
print("Grade:", grade)
