class Calculator:
    def calculate(self, a, b, op):
        operations = {
            "1": a + b,
            "2": a - b,
            "3": a * b,
            "4": a / b if b != 0 else "can't devide by 0",
        }
        # obj.get gives value of the key
        return operations.get(op, "Invalid choice")


calc = Calculator()

while True:
    print("\n1.Add 2.Sub 3.Mul 4.Div 5.Exit")
    choice = input("Choice: ")

    if choice == "5":
        break

    if choice in ["1", "2", "3", "4"]:
        a = float(input("First: "))
        b = float(input("Second: "))
        print("Result:", calc.calculate(a, b, choice))
    else:
        print("Invalid choice")
