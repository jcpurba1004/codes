class Grid(object):
    """Represents a two-dimensional grid."""

    def __init__(self, rows, columns, fillValue = None):
        """Sets up the data."""
        self.data = []
        for row in range(rows):
            dataInRow = []
            for column in range(columns):
                dataInRow.append(fillValue+row+column)
                #print(dataInRow)
            self.data.append(dataInRow)
            #print(self.data)

    def getHeight(self):
        """Returns the number of rows."""
        return len(self.data)

    def getWidth(self):
        """Returns the number of columns."""
        return len(self.data[0])

    def __str__(self):
        """Returns a string representation of the grid."""
        result = ""
        for row in range(self.getHeight()):
            for col in range(self.getWidth()):
                result += str(self.data[row][col]) + " "
            result += "\n"
        return result
            
def main():
    rows = 3
    columns = 5
    value = 2
    grid = Grid(rows, columns, value)
    print(grid)

if __name__ == "__main__":
    main()
