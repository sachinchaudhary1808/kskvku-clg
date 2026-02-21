class Person:
    count = 0

    def __init__(self, name):
        self.name = name
        Person.count += 1


person1 = Person("sachin")
person2 = Person("coco")
person3 = Person("jose")
person4 = Person("cooki")

print(Person.count)
