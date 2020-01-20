"""
File: randompatterns.py
Draws a radial pattern of squares in a random fill color
at each corner of the window.
"""

from turtle import Turtle
from polygons import *
import random

def drawPattern(t, x, y, count, length, shape):
    """Draws a radial pattern with a random
    fill color at the given position."""
    t.begin_fill()
    t.up()
    t.goto(x, y)
    t.setheading(0)
    t.down()
    t.fillcolor(random.randint(0, 255),
               random.randint(0, 255),
               random.randint(0, 255))
    radialPattern(t, count, length, shape)
    t.end_fill()

def main():
    t = Turtle()
    t.speed(0)
    # Number of shapes in radial pattern
    count = 10
    # Relative distances to corners of window from center
    width = t.screen.window_width() // 2
    height = t.screen.window_height() // 2
    # Length of the square
    length = 30
    # Inset distance from window boundary for squares
    inset = length * 2
    # Draw squares in upper-left corner
    drawPattern(t, -width + inset, height - inset, count, length, square)
    # Draw squares in lower-left corner
    drawPattern(t, -width + inset, inset - height, count, length, square)
    # Length of the hexagon
    length = 20
    # Inset distance from window boundary for hexagons
    inset = length * 3
    # Draw hexagons in upper-right corner
    drawPattern(t, width - inset, height - inset, count, length, hexagon)
    # Draw hexagons in lower-right corner
    drawPattern(t, width - inset, inset - height, count, length, hexagon)

if __name__ == "__main__":
    main()
