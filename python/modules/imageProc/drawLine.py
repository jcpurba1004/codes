import turtle
def draw_square():
    turtle.forward(100)
    turtle.left(90)
    turtle.forward(100)
    turtle.left(90)
    turtle.forward(100)
    turtle.left(90)
    turtle.forward(100)

def draw_circle():
    turtle.pensize(10)
    turtle.pencolor("red")
    turtle.circle(100)
    turtle.left(90)
    turtle.pencolor("blue")
    turtle.circle(100)
    turtle.left(90)
    turtle.pencolor("yellow")
    turtle.circle(100)
    turtle.left(90)
    turtle.pencolor("#FF55FF")
    turtle.circle(100)

def draw_mickeyMouse():
    turtle.up()
    turtle.setpos(-300,0)
    turtle.down()
    turtle.dot(200,"red")
    turtle.up()
    turtle.setpos(-400,100)
    turtle.down()
    turtle.dot(100,"blue")
    turtle.up()
    turtle.setpos(-200,100)
    turtle.down()
    turtle.dot(100,"blue")
    turtle.hideturtle()

def draw_halfCircle():
    turtle.setheading(0)
    turtle.fillcolor("blue")
    turtle.begin_fill()
    turtle.circle(50,180)
    turtle.goto(0,0)
    turtle.end_fill()
    
    turtle.setheading(90)
    turtle.fillcolor("yellow")
    turtle.begin_fill()
    turtle.circle(50,180)
    turtle.goto(0,0)
    turtle.end_fill()
    
    turtle.setheading(180)
    turtle.fillcolor("#FE642E")
    turtle.begin_fill()
    turtle.circle(50,180)
    turtle.goto(0,0)
    turtle.end_fill()
    
    turtle.setheading(270)
    turtle.fillcolor("FF0040")
    turtle.begin_fill()
    turtle.circle(50,180)
    turtle.goto(0,0)
    turtle.end_fill()
    
def main():
    draw_square()
    draw_circle()
    draw_mickeyMouse()
    draw_halfCircle()
    
if __name__ == "__main__":
    main()


