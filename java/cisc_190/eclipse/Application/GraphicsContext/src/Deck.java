private void draw() {
    
    GraphicsContext g = canvas.getGraphicsContext2D();
    
    Deck deck = new Deck();
    deck.shuffle();
    
    double sx,sy;  // top left corner of source rect for card in cardImages
    double dx,dy;  // corner of destination rect for card in the canvas
    
    for (int i = 0; i < 5; i++) {
        Card card = deck.dealCard();
        System.out.println(card); // for testing
        sx = 79 * (card.getValue()-1);
        sy = 123 * (3 - card.getSuit());
        dx = 20 + (79+20) * i;
        dy = 20;
        g.drawImage( cardImages, sx,sy,79,123, dx,dy,79,123 );
    }
    
} // end draw()