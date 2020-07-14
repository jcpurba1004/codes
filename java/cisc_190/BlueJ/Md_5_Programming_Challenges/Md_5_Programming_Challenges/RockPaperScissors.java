/**
 * Lead Author(s):
 * Jeremiah Purba; 5550010017
 * 
 * Other Contributors:
 * None
 *
 * References:
 * Gaddis, T. (2015). Starting Out With Java Myprogramming Lab 
 * From Control Structures Through Objects. (6th ed.). Addison-Wesley. 
 *
 * Version: 1.3 (07/13/2020)
 */
// Needed for the Scanner class for input
import java.util.Scanner;

// needed for random generator
import java.util.Random;

/*
 * This class would perform Rock, Paper and Scissors game against the computer.
 * 1. When the program begins, a random number in the range of 1 through 3 is
 * generated. If the number is 1, then the computer has chosen rock. If the 
 * number is 2, then the computer has chosen paper. If the number is 3, then
 * the computer has chosen scissors. (Don't display the computer's choice yet.)
 * 2. The user enters his or her choice of "rock", "paper", or "scissors" at
 * the keyboard. (You can use a menu if you prefer.)
 * 3. The computer's choice is displayed.
 * 4. A winner is selected according to the following rules:
 *    * If one player chooses rock and the other player chooses scissors, 
 *    then rock wins. (The rock smashes the scissors.)
 *    * If one player chooses scissors and the other player chooses paper,
 *    then scissors wins. (Scissors cuts paper.)
 *    * If one player chooses paper and the other player chooses rock,
 *    then paper wins. (Paper wraps rock.)
 *    * If both players make the same choice, the game must be played again
 *    to determine the winner.
 * Be sure to divide the program into methods that perform each major task.  
 */


public class RockPaperScissors {

    public static void main(String[] args) 
    {

        String results;

        // Test using menu and user input
        results = determineWinner(getUserInput(), getComputerChoice());
        if (results == "Draw")
        {
            System.out.println("Results: " + results);
        }
        else
        {
            System.out.println("Results: " + results + " win");
        }

        
        
        // Test all possibilities cases
        results = determineWinner("Rock", "Scissors");
        System.out.println("\nuser: Rock; computer: Scissors. Results: " + results +" win");
        
        results = determineWinner("Paper", "Scissors");
        System.out.println("\nuser: Paper; computer: Scissors. Results: " + results +" win");
        
        results = determineWinner("Scissors", "Paper");
        System.out.println("\nuser: Scissors; computer: Paper. Results: " + results +" win");
        
        results = determineWinner("Scissors", "Rock");
        System.out.println("\nuser: Scissors; computer: Rock. Results: " + results +" win");
        
        results = determineWinner("Paper", "Rock");
        System.out.println("\nuser: Paper; computer: Rock. Results: " + results +" win");
        
        results = determineWinner("Rock", "Paper");
        System.out.println("\nuser: Rock; computer: Paper. Results: " + results +" win");
        
        results = determineWinner("Rock", "Rock");
        System.out.println("\nuser: Rock; computer: Rock. Results: " + results );
        
        results = determineWinner("Paper", "Paper");
        System.out.println("\nuser: Paper; computer: Paper. Results: " + results );
        
        results = determineWinner("Scissors", "Scissors");
        System.out.println("\nuser: Scissors; computer: Scissors. Results: " + results );
        
    }
    
    /*
     * Purpose: Generate random number and 
     *          returns either "Rock", "Paper" or "Scissors".
     * Signature: input nothing and return string 
     * Examples: 
     * getComputerChoice() return "Rock"
     * getComputerChoice() return "Paper"
     * getComputerChoice() return "Scissors"
     */
    public static String getComputerChoice()
    {
        // variable for word Rock, Paper, Scissors
        String stringChoices = "";
        
        // create random object
        Random random = new Random();
        
        // Limit for random number and input for random number generated
        // Maximum and minimum number come from Professor
        int minimumNumber = 1;
        int maximumNumber = 3;
        int numberGenerated = ((maximumNumber - minimumNumber) + minimumNumber) + minimumNumber;

        // initialized to big number out of ranged so it will end up in while loop
        int randomNumber = 99;
        
        // Make sure it generated number range from 1 to 3
        while( (randomNumber < minimumNumber) || (randomNumber > maximumNumber) )
        {
            randomNumber = random.nextInt(numberGenerated);
        }
        
        // Define string for each number generated
        switch(randomNumber)
        {
            case 1:
                stringChoices = "Rock";
                break;
            case 2:
                stringChoices = "Paper";
                break;
            case 3:
                stringChoices = "Scissors";
                break;
            default:
                System.out.println("Wrong number is generated !");
                break;  
        }
        
        return stringChoices;
    } // end of getComputerChoice()
    
    /*
     * Purpose: Show the menu of choices and get User input choice 
     * Signature: input nothing and return string 
     * Examples: 
     * getUserInput() return "Rock"
     * getUserInput() return "Paper"
     * getUserInput() return "Scissors"
     * getUserInput() return exit the program.
     */
    public static String getUserInput()
    {
        String userChoice = "";
        
        // initialized to big number out of ranged so it will end up in while loop
        int numberOfChoice = 99;
        
        // scanner object for user's input
        Scanner input = new Scanner (System.in);
        
        System.out.println("Welcome to Rock, Paper and Scissors game");
        System.out.println("1. Rock");
        System.out.println("2. Paper");
        System.out.println("3. Scissors");
        System.out.println("4. Exit");
        System.out.println("Please make your selection: ");
        numberOfChoice = input.nextInt();
        
        // Make sure it generated number range from 1 to 3
        while( (numberOfChoice < 1) || (numberOfChoice > 4) )
        {
            System.out.println("Error. Please input number 1,2,3 or 4 ! ");
            numberOfChoice = input.nextInt();
        }
        
        switch(numberOfChoice)
        {
            case 1:
                userChoice = "Rock";
                break;
            case 2:
                userChoice = "Paper";
                break;
            case 3:
                userChoice = "Scissors";
                break;
            case 4:
                System.out.println("Thank you for playing the game. Good bye !");
                System.exit(0);
                break;  
            default:
                System.out.println("User choose the wrong menu !");
                System.exit(1);
                break;  
        }
        
        input.close();
        return userChoice;
    } // end of getUserInput()
    
    /*
     * Purpose: randomly returns either "Rock", "Paper" or "Scissors".
     * Signature: input 2 strings and return string 
     * Examples: 
     * getComputerChoice("Rock","Scissors") return "User"
     * getComputerChoice("Scissors","Paper") return "User"
     * getComputerChoice("Rock","Paper") return "Computer"
     */
    public static String determineWinner(String userChoice, String computerChoice)
    {
        // Variables for all choices and the winner plus draw
        String rock     = "Rock";
        String paper    = "Paper";
        String scissors = "Scissors";
        String user     = "User";
        String computer = "Computer";
        String draw     = "Draw";
        String results   = "";
        
        // User choose rock and computer choose scissors, user win
        if( (userChoice.equals(rock)) && (computerChoice.equals(scissors)) )
        {
            results =  user;
        }
        // User choose scissors and computer choose paper, user win
        else if( (userChoice.equals(scissors)) && (computerChoice.equals(paper)) )
        {
            results =  user;
        }
        // User choose paper and computer choose rock, user win
        else if( (userChoice.equals(paper)) && (computerChoice.equals(rock)) )
        {
            results =  user;
        }
        // User choose rock and computer choose paper, computer win
        else if( (userChoice.equals(rock)) && (computerChoice.equals(paper)) )
        {
            results =  computer;
        }
        // User choose paper and computer choose scissors, computer win
        else if( (userChoice.equals(paper)) && (computerChoice.equals(scissors)) )
        {
            results =  computer;
        }
        // User choose scissors and computer choose rock, computer win
        else if( (userChoice.equals(scissors)) && (computerChoice.equals(rock)) )
        {
            results =  computer;
        }
        // Both User and computer choose the same and the game is draw
        else if( userChoice.equals(computerChoice) )
        {
            results =  draw;
        }
        
        return results;
        
    } // end of determineWinner

}
