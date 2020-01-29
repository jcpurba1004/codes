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
