class Person:
    count = 0

    def __init__(self, name):
        self.name = name
        Person.count += 1


person1 = Person("sachin")
person1 = Person("coco")
person1 = Person("jose")
person1 = Person("cooki")

print(Person.count)
