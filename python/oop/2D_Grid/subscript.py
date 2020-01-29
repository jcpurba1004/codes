def __getitem__(self, index):
    """Supports two-dimensional indexing with [] [].
    Index represents a row number."""
    return self.data[index]

grid[1][2] = 5

def find(self, value):
    """Returns (row, column) if value is found,
    or None otherwise."""
    for row in range(self.getHeight()):
        for column in range(self.getWidth()):
            if self[row][column] == value:
                return (row, column)
            return None

from grid import Grid
import random

def makeMatrix():
    """Builds and returns an encryption matrix."""
    list OfChars = []
    for ascii in range(32, 128):
        listofChars.append(chr(ascii))
    random.shuffle(listOfChars)
    matrix = Grid(8, 12)
    i = 0
    for row in range(matrix.getHeight()):
        for column in range(matrix.getWidth()):
            matrix[row][column] = listOfChars[i]
            i += 1
        return matrix

def encrypt(plainText, matrix):
    """Uses matrix to encrypt plainText,
    and returns cipherText."""
    cypherText = ""
    limit = len(plainText)
    # Adjust for an odd number of characters
    if limit % 2 == 1:
        limit -= 1
    # Use the matrix to encrypt pairs of characters
    i = 0
    while i < limit:
        cypherText += encryptPair(plainText, i, matrix)
        i += 2
    # Add the last character if length was odd
    if limit < len(plainText):
        cypherText += plainText[limit]
    return cypherText

def encryptPair(plainText, i, matrix):
    """Returns the cipherText of the pair of
    characters at i and i + 1 in plainText."""
    # Locate the characters in the matrix
    (row1, col1) = matrix.find(plainText[i])
    (row2, col2) = matrix.find(plainText[i + 1])
    # Swap them if they are in the same row or column
    if row1 == row2 or col1 == col2:
        return plainText[i + 1] + plainText[i]
    # Otherwise, use the characters at the opposite
    # corners of the rectangle in the matrix
    else:
        ch1 = matrix[row2][col1]
        ch2 = matrix[row1][col2]
        return ch1 + ch2

def decrypt(cipherText, matrix):
    """Uses matrix to decrypt cipherText,
    and returns plainText."""
    return encrpyt(cipherText, matrix)
