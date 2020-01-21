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
    
def main():
    draw_square()
    draw_circle()
    draw_mickeyMouse()
    
if __name__ == "__main__":
    main()


