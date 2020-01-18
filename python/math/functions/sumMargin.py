#Functions to input one number
def getNumbers():
    inputNum = input("Enter a number (<Enter> to quit): ")
    while inputNum != "":
        x = eval(inputNum)
        inputNum = input("Enter a number (<Enter> to quit): ")
    return 
    
def summation(lower, upper, margin):
    """Returns the sum of the numbers from lower through upper,
    and outputs a trace of the arguments and return values
    on each call"""
    blanks = " " * margin
    print(blanks, lower, upper)
    if lower > upper:
        print(blanks, 0)
        return 0
    else:
        result = lower + summation(lower + 1, upper, margin + 4)
        print(blanks, result)
        return result


def main():
    print("\nEnter lower number:")
    lower = getNumbers()
    print("Enter upper number:")
    upper = getNumbers()
    print("Enter margin number:")
    margin = getNumbers()
    sum = summation(1,4,0)
    print("Total sum within range ", lower, " and ", upper, " and margin ", margin, " is ", sum)

if __name__ == '__main__':
    main()