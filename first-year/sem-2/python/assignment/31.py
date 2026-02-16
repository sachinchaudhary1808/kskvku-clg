class Bank:
    def __init__(self):
        self.bankBalance = 0

    def deposit(self, amount):
        self.bankBalance += amount

    def withdraw(self, amount):
        self.bankBalance -= amount

    def showBalance(self):
        return self.bankBalance


account = Bank()
account.deposit(100)
print(account.showBalance())
