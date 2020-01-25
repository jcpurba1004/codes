"""
File: labeldemo.py
"""

from breezypythongui import EasyFrame

class LabelDemo(EasyFrame):
    """Displays a greeting in a window."""

    def __init__(self):
        """Sets up the window and the label."""
        EasyFrame.__init__(self)
        self.addLabel(text = "Hello World!", row = 0, column = 0)

def main():
    """Instanttiates and pops up the window."""
    LabelDemo().mainloop()

if __name__ == "__main__":
    main()
