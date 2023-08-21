public void drawPicture(GraphicsContext g, int width, int height) {

    g.setFill(Color.WHITE);
    g.fillRect(0, 0, width, height); // First, fill  with a background color.

    // As an example, draw a large number of colored disks.
    // To get a different picture, erase this code, and substitute your own. 
    
    int centerX;     // The x-coord of the center of a disk.
    int centerY;     // The y-coord of the center of a disk.
    int colorChoice; // Used to select a random color.
    int count;       // Loop control variable for counting disks
    
    for (count = 0; count < 500; count++) {

        centerX = (int)(width*Math.random());
        centerY = (int)(height*Math.random());

        colorChoice = (int)(4*Math.random());
        switch (colorChoice) {
            case 0 -> g.setFill( Color.RED );
            case 1 -> g.setFill( Color.GREEN );
            case 2 -> g.setFill( Color.BLUE );
            case 3 -> g.setFill( Color.YELLOW );
        }

        g.fillOval( centerX - 50, centerY - 50, 100, 100 );
        g.setStroke(Color.BLACK);
        g.strokeOval( centerX - 50, centerY - 50, 100, 100 );
    }

} // end drawPicture()