class Student:
    def __init__(self, name, roll_num, marks):
        self.name = name
        self.roll_num = roll_num
        self.marks = marks

    def show(self):
        print(self.name, self.roll_num, self.marks)


s1 = Student("sachin", 12, 88)
s2 = Student("ashutosh", 19, 95)

s1.show()
s2.show()
