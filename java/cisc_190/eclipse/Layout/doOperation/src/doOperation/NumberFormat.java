private void doOperation( char op ) {

    double x, y;  // The numbers from the input boxes.

    try {  // Get x from the first input box.
        String xStr = xInput.getText();
        x = Double.parseDouble(xStr);
    }
    catch (NumberFormatException e) {
            // The string xStr was not a legal number.
            // Show an error message, move the input focus 
            // to xInput and select all the text in that box.
        answer.setText("Illegal data for x.");
        xInput.requestFocus();
        xInput.selectAll();
        return; // stop processing when an error occurs!
    }

    try {  // Get a number from the second input box.
        String yStr = yInput.getText();
        y = Double.parseDouble(yStr);
    }
    catch (NumberFormatException e) {
        answer.setText("Illegal data for y.");
        yInput.requestFocus();
        yInput.selectAll();
        return;
    }

    /* Perform the operation based on the parameter, op. */

    if (op == '+')
        answer.setText( "x + y = " + (x+y) );
    else if (op == '-')
        answer.setText( "x - y = " + (x-y) );
    else if (op == '*')
        answer.setText( "x * y = " + (x*y) );
    else if (op == '/') {
        if (y == 0) {  // Can't divide by zero! Show an error message.
            answer.setText("Can't divide by zero!");
            yInput.requestFocus();
            yInput.selectAll();
        }
        else {
            answer.setText( "x / y = " + (x/y) );
        }
    }

} // end doOperation()