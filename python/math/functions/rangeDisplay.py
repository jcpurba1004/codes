#Functions to input one number
def getNumbers():
    inputNum = input("Enter a number (<Enter> to quit): ")
    while inputNum != "":
        x = eval(inputNum)
        inputNum = input("Enter a number (<Enter> to quit): ")
    return x

#display number within range (lower,upper)
def display(lower,upper):
    while lower <= upper:
        print(lower)
        lower = lower + 1


# Recursively display number within range (lower,upper)
def displayRecursive(lower,upper):
    if lower <= upper:
        print(lower)
        displayRecursive(lower+1,upper)


def summation(lower,upper):
    result = 0
    while lower <= upper:
        result += lower
        lower += 1
    return result


def sumRecursive(lower,upper):
    if lower <= upper:
        return lower + sumRecursive(lower+1, upper)
    else:
        return 0

def main():
    print("\nEnter lower number:")
    lower = getNumbers()
    print("Enter upper number:")
    upper = getNumbers()
    print("Use normal print: ")
    display(lower,upper)
    print("Use recursive print: ")
    displayRecursive(lower,upper)

    sum = summation(lower,upper)
    print("Total sum within range ", lower, " and ", upper, " is ", sum)
    sumRec = sumRecursive(lower,upper)
    print("Total recursive sum within range ", lower, " and ", upper, " is ", sumRec)

if __name__ == '__main__':
    main()