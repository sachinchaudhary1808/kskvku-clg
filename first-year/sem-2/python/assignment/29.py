class AreaPerimeter:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def perimeter(self):
        return 2 * (self.length + self.width)

    def area(self):
        return self.length * self.width


length = int(input("enter the length of rectangle: "))
width = int(input("enter the width of rectangle: "))

rect = AreaPerimeter(length, width)

print("Perimeter", calc.perimeter())
print("Area", calc.area())
