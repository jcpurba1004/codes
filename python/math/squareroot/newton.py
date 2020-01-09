x = 25
y = 5                   # The actual square root of x
z = 1                   # Our initial approximation
z = (z + x / z) / 2     # Our first improvement
z
z = (z + x / z) / 2     # Our second improvement
z
z = (z + x / z) / 2     # Our third improvement - got it!
z   

#set x to the user's input value
#set tolerance to 0.000001
#set estimate to 1.0
#while True
#    set estimate to (estimate + x / estimate) / 2
#    set difference to abs(x - estimate ** 2)
#    if difference <= tolerance:
#        break
#output the estimate

"""
Program: newton.py
Author: Ken

Compute the square root of a number.
1. The input is a number.
2. The outputs are the program's estimate of the square root 
using Newton's method of successive approximations, and
Python's own estimate using math.sqrt.
"""

import math

# Receive the input number from the user
x = float(input("Enter a positive number: "))

# Initialize the tolerance and estimate
tolerance = 0.000001
estimate = 1.0

# Perform the successive approximations
while True:
    estimate = (estimate + x / estimate) / 2
    difference = abs(x - estimate ** 2)
    if difference <= tolerance:
        break

# Output the result
print("The program's estimate:", estimate)
print("Python's estimate:     ", math.sqrt(x))

