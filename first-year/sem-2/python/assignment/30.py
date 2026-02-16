class AreaCircumference:
    def __init__(self, radius):
        self.radius = radius

    def circumference(self):
        return 3.14 * (self.radius * 2)

    def area(self):
        return 3.14 * (self.radius**2)


radius = int(input("enter the radius of circle: "))
circle = AreaCircumference(radius)
print("Circumference", circle.circumference())
print("Area", circle.area())
