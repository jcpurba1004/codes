def isSorted(input):
    if len(input) == 0 or len(input) == 1:
        return True
    else:
        for index in range(len(input) - 1):
            if input[index] > input[index + 1]:
                return False
    return True

def main():
    my = []
    print (isSorted(my))
    my = [1]
    print(isSorted(my))
    my = list(range(10))
    print(isSorted(my))
    my[0] = 3
    print(isSorted(my))

if __name__ == "__main__":
    main()