account = RestrictedSavingsAccount("Ken", "1001", 500.00)
print(account)
account.getBalance()
for count in range(3):
    account.withdraw(100)
account.withdraw(50)
account.resetCounter()
account.withdraw(50)

<parent class name>.<method name>(<self, <other arguments>)
