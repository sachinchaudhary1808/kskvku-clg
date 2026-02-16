class Employee:
    def __init__(self, name, monthlySalary):
        self.name = name
        self.monthlySalary = monthlySalary

    def calcAnnualSalary(self):
        return monthlySalary * 12


name = input("Enter the employee name: ")
monthlySalary = int(input("Enter monthly salary: "))

emp = Employee(name, monthlySalary)

print("Employee name: ", emp.name)
print("Employee annual salary: ", emp.calcAnnualSalary())
