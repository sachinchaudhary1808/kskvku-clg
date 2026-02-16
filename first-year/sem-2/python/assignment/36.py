class Student:
    def __init__(self, name, rollNum):
        if not isinstance(name, str) or not isinstance(rollNum, int):
            raise ValueError("name is not a string or age is not a number!")
        self.name = name
        self.rollNum = rollNum

    def print(self):
        return f"{self.name}: {self.rollNum}"


s1 = Student("sachin", 12)

print(s1.print())
