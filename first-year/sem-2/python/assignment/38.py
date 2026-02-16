class Student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks

    def print(self):
        print("Name:", self.name)
        print("Marks:", self.marks)
        print("___________________")


s1 = Student("Sachin", 85)
s2 = Student("Cooki", 92)
s3 = Student("Jose`", 99)

s1.print()
s2.print()
s3.print()
