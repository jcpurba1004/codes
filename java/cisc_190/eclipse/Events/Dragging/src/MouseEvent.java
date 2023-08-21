private double startX, startY; // Point where original mouse press occurred. 
private double prevX, prevY;   // Most recently processed mouse coords.
private boolean dragging;      // Set to true when dragging is in progress.
. . . // other instance variables for use in dragging

public void mousePressed(MouseEvent evt) {
   if (dragging) {
         // The user pressed a second mouse button before releasing the first.
         // Ignore the second button press.
       return;
   }
   if ( we-want-to-start-dragging ) {
       dragging = true;
       startX = evt.getX();  // Remember starting position.
       startY = evt.getY();
       prevX = startX;       // Remember most recent coords.
       prevY = startY;
          . 
          . // Other processing.
          .
   }
}

public void mouseDragged(MouseEvent evt) {
    if ( dragging == false )  // First, check if we are 
        return;               //   processing a dragging gesture.
    int x = evt.getX(); // Current position of Mouse.
    int y = evt.getY();
      .  
      .  // Process a mouse movement from (prevX, prevY) to (x,y).
      .
    prevX = x;  // Remember the current position for the next call.
    prevY = y;
}

public void mouseReleased(MouseEvent evt) {
    if ( dragging == false )  // First, check if we are 
        return;               //   processing a dragging gesture.
    dragging = false;  // We are done dragging.
     .
     .  // Other processing and clean-up.
     .
}