class Calculator:
    def add(self, a, b):
        return a + b

    def displaySum(self, a, b):
        result = self.add(a, b)
        return f"Sum: {result}"


calc = Calculator()

print(add.displaySum(1, 5))
