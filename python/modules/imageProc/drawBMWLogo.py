import turtle

turtle.pencolor("#C0C0C0")
turtle.pensize(4)
turtle.dot(300,"Black")

turtle.fillcolor("white")
turtle.begin_fill()
turtle.fd(100)
turtle.setheading(90)
turtle.circle(100,90)
turtle.goto(0,0)
turtle.end_fill()

turtle.setheading(90)
turtle.fillcolor("blue")
turtle.begin_fill()
turtle.fd(100)
turtle.setheading(180)
turtle.circle(100,90)
turtle.goto(0,0)
turtle.end_fill()

turtle.setheading(180)
turtle.fillcolor("white")
turtle.begin_fill()
turtle.fd(100)
turtle.setheading(270)
turtle.circle(100,90)
turtle.goto(0,0)
turtle.end_fill()

turtle.setheading(270)
turtle.fillcolor("blue")
turtle.begin_fill()
turtle.fd(100)
turtle.setheading(360)
turtle.circle(100,90)
turtle.goto(0,0)
turtle.end_fill()

def main():
    draw_BMWLogo()

if __name__ == "__main__":
    main()
