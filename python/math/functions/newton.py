import math

def square(x):
    return x * x

def average(x, y):
    return (x + y)/2.0

def is_good_enough(guess, n):
    return abs(square(guess) - n) < 0.0001

def next_guess(guess, n):
    return average(guess, n/guess)

'''
1. Check if the current guess is good enough.
2. If yes, return it.
3. If not, make the next guess and keep going.
'''
def nsqrt(guess, n):
    if is_good_enough(guess, n):
        return guess
    else: 
        return nsqrt (next_guess(guess, n), n)

def newton_square_root(n):
    return nsqrt(1, n)

def main():
    """Allows the user to obtain square roots.""" 
    while True:
        # Receive the input number from the user
        x = input("Enter a positive number or enter/return to quit: ")
        if x == "":
             break
        x = float(x)
        # Output the result
        print("The program's estimate is", newton_square_root(x))
        print("Python's estimate is     ", math.sqrt(x))

if __name__ == "__main__":
    main()