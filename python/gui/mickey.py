"""
File: mickey.py
Author: Jeremiah Purba
Programming Project: Mickey Mouse
class: CISC 179 Python Programming
Date: 01/20/2020
"""
import turtle as mickey
FACERADIUS = 200
EARRADIUS = 100
POSPOSITION = 106
NEGPOSITION = -106

mickey.dot(FACERADIUS,"red")
mickey.up()
mickey.setpos(NEGPOSITION,POSPOSITION)
mickey.down()
mickey.dot(EARRADIUS,"blue")
mickey.up()
mickey.setpos(POSPOSITION,POSPOSITION)
mickey.down()
mickey.dot(EARRADIUS,"blue")
mickey.hideturtle()
