private void draw() {

    GraphicsContext g = canvas.getGraphicsContext2D();
    
    double width = canvas.getWidth();
    double height = canvas.getHeight();
    
    g.setFill( Color.WHITE );  // fill with white background
    g.fillRect(0, 0, width, height);

    for (int i = 0; i < 25; i++) {

        // Draw one string.  First, set the font to be one of the five
        // available fonts, at random.  

        int fontNum = (int)(5*Math.random()) + 1;
        switch (fontNum) {
            case 1 -> g.setFont(font1);
            case 2 -> g.setFont(font2);
            case 3 -> g.setFont(font3);
            case 4 -> g.setFont(font4);
            case 5 -> g.setFont(font5);
        } // end switch

        // Set the color to a bright, saturated color, with random hue.

        double hue = 360*Math.random();
        g.setFill( Color.hsb(hue, 1.0, 1.0) );

        // Select the position of the string, at random.

        double x,y;
        x = -50 + Math.random()*(width+40);
        y = Math.random()*(height+20);

        // Draw the message.

        g.fillText("Hello JavaFX",x,y);
        
        // Also stroke the outline of the strings with black.
        
        g.setStroke(Color.BLACK);
        g.strokeText("Hello JavaFX",x,y);

    } // end for

} // end draw()