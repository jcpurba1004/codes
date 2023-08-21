/**
 * Called by the start() method, and called by an event handler if
 * the user clicks the "New Game" button.  Start a new game.
 */
private void doNewGame() {
    if (gameInProgress) {
            // If the current game is not over, it is an error to try
            // to start a new game.
        message = "You still have to finish this game!";
        drawBoard();
        return;
    }
    deck = new Deck();   // Create the deck and hand to use for this game.
    hand = new Hand();
    deck.shuffle();
    hand.addCard( deck.dealCard() );  // Deal the first card into the hand.
    message = "Is the next card higher or lower?";
    gameInProgress = true;
    drawBoard();
} // end doNewGame()