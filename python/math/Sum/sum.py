sum = 0.0
count = 0.0
data = input("Enter a number or press Enter to quit: ")
while data != "":
    number = float(data)
    sum += number
    count += 1.0
    data = input("Enter the number or press Enter to quit: ")
average = float(sum/count)
print("The sum is",sum)
print("The average is",average)