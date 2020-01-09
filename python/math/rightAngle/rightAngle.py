firstSide = int(input("Enter the firstside: "))
secondSide = int(input("Enter the secondside: "))
thirdSide = int(input("Enter the thirdside: "))
if (firstSide >= secondSide) and (firstSide >= thirdSide):
     largest = firstSide
     if (secondSide >= thirdSide):
          medium = secondSide
          smallest = thirdSide
     else:
        medium = thirdSide
        smallest = secondSide

elif (secondSide >= firstSide) and (secondSide >= thirdSide):
    largest = secondSide
    if(firstSide >= thirdSide):
        medium = firstSide
        smallest = thirdSide
    else:
        medium = thirdSide
        smallest = firstSide

else:
    largest = thirdSide
    if(firstSide >= secondSide):
        medium = firstSide
        smallest = secondSide
    else:
        medium = secondSide
        smallest = firstSide

smallMedSquareAdd = ((smallest**2)+(medium**2))
largestSquare = (largest**2)

if(smallMedSquareAdd==largestSquare):
    print("The triangle is a right triangle.")
else:
    print("The triangle is not a right triangle.")