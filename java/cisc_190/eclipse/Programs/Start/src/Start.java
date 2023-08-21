public void start(Stage stage) {

    cardImages = new Image("cards.png");     // Load card images.
    board = new Canvas(4*99 + 20, 123 + 80); // Space for 4 cards.
    
    Button higher = new Button("Higher");    // Create the buttons, and
    higher.setOnAction( e -> doHigher() );   //    install event handlers.
    Button lower = new Button("Lower");
    lower.setOnAction( e -> doLower() );
    Button newGame = new Button("New Game");
    newGame.setOnAction( e -> doNewGame() );

    HBox buttonBar = new HBox( higher, lower, newGame );
            
    higher.setPrefWidth(board.getWidth()/3.0);  // Make each button fill
    lower.setPrefWidth(board.getWidth()/3.0);   //     1/3 of the width.
    newGame.setPrefWidth(board.getWidth()/3.0);
            
    BorderPane root = new BorderPane();  // Create the scene graph root node.
    root.setCenter(board);
    root.setBottom(buttonBar);

    doNewGame();  // set up for the first game

    Scene scene = new Scene(root);  // Finish setting up the scene and stage.
    stage.setScene(scene);
    stage.setTitle("High/Low Game");
    stage.setResizable(false);
    stage.show();
    
}  // end start()