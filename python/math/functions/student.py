"""
File: student.py
Resources to manage a student's name and test scores.
"""

class Student(object):
    """Represents a student."""

    def __init__(self, name, number):
        """All scores are initially 0."""
        self.name = name
        self.scores = []
        for count in range(number):
            self.scores.append(0)

    def getName(self):
        """Returns the student's name."""
        return self.name
    
    def setScore(self, i, score):
        """Resets the ith score, counting from 1."""
        self.scores[i - 1] = score

    def getScore(self, i):
        """Returns the ith score, counting from 1.
        """
        return self.scores[i - 1]
    
    def getAverage(self):
        """Returns the average score."""
        return sum(self.scores) / len(self.scores)
    
    def getHighScore(self):
        """Returns the highest score."""
        return max(self.scores)
    
    def __str__(self):
        """Returns the string representation of the student."""
        return "Name: " + self.name  + "\nScores: " + \
               " ".join(map(str, self.scores))
        
    # Write method definitions here
    def __eq__(self, other):
        if (self.name == other.name) and (self.name is other.name):
            return True
        else:            
            return False

    def __lt__(self, other):
        if self.name < other.name:
            return True
        else: 
            return False

    def __ge__(self, other):
        if self.name >= other.name:
            return True
        else:
            return False

def main():
    """A simple test."""
    student1 = Student("Ben", 5)
    student2 = Student("Ben", 5)
    print(student1)
    print(student2)
    for i in range(1, 6):
        student1.setScore(i, 25*i)
        student2.setScore(i, 26*i)
    print(student1)
    print(student2)
    
    print("Is student 1 = student 2 ?", student1 == student2)
    print("Is student 1 < student 2 ?", student1 < student2)
    print("Is student 1 > student 2 ?", student1 > student2)

if __name__ == "__main__":
    main()
