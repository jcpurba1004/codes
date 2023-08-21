public void drawFrame(GraphicsContext g, int frameNumber, 
                            double elapsedSeconds, int width, int height) {

    g.setFill(Color.WHITE);
    g.fillRect(0,0,width,height);  // Fill drawing area with white.

    double inset; // Gap between edges of drawing area and outer rectangle.

    double rectWidth, rectHeight;   // The size of one of the rectangles.

    g.setStroke(Color.BLACK);  // Draw the rectangle outlines in black.

    inset = frameNumber % 15 + 0.5;  // (The 0.5 is a technicality that gives
                                     //  a sharper picture.)

    rectWidth = width - 2*inset;
    rectHeight = height - 2*inset;

    while (rectWidth >= 0 && rectHeight >= 0) {
        g.strokeRect(inset, inset, rectWidth, rectHeight);
        inset += 15;       // rectangles are 15 pixels apart
        rectWidth -= 30;
        rectHeight -= 30;
    }

}