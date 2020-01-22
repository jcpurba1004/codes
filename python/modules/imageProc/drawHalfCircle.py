import turtle

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
    turtle.fillcolor("#FF0040")
    turtle.begin_fill()
    turtle.circle(50,180)
    turtle.goto(0,0)
    turtle.end_fill()
    
def main():
    draw_halfCircle()
    
if __name__ == "__main__":
    main()


