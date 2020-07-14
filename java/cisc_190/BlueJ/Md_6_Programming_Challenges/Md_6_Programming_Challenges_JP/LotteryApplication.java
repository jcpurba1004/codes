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
 * Version: 1.5 (07/12/2020)
 */

// Needed for the Scanner class for input
import java.util.Scanner;

// Neded for random generator
import java.util.Random;

/**
 * Class Name: LotteryApplication
 * Purpose   : 1. Get user pick number. User can't use 
 *                same number twice.
 *             2. Get winning number picked by computer. Computer can't
 *                use same number twice.
 *             3. Check how many number match between them
 *             4. Display the results  
 */
public class LotteryApplication 
{   
    // Requirements:
    // Make the methods instance methods (not static) but put 
    // the code to demonstrate the class inside of a static main method 
    // in the class.
    public static void main(String[] args) 
    {
        LotteryApplication lottery = new LotteryApplication();
        
        // assume array size 5, lottery has 5 number from teacher example
        final int arraySize = 5;
                        
        // array for user pick number and winning number by computer
        int[] userPicks = new int[arraySize];
        int[] winningNumbers  = new int[arraySize] ;
                
        String winningNumber;
        
        // get user input pick number
        userPicks = lottery.inputUserPicks();
        
        // get winning pick number
        winningNumbers = lottery.pickWinningNumbers();
        
        System.out.println("User pick numbers are: " + lottery.arrayToString(userPicks));
        
        System.out.println("The winning numbers are: " + lottery.arrayToString(winningNumbers));

        System.out.println("Number of matching numbers: " + lottery.getNumberOfMatches(userPicks, winningNumbers));
    }
    
    /*
     * Purpose: check the input number whether it's on the 
     *          array or not. Return the results as boolean
     *          whether it's true or false
     * Signature: input array of integers and integer, return boolean 
     * Examples: 
     * contains({1, 2, 3}, 2) returns true
     * contains({1, 2, 3}, 4) returns false
     */
    public Boolean contains (int [] arrayNumber, int number)
    {
        int i;
        // initialize result to false and it will be updated
        // in the loop.
        boolean result = false;
        
        // loop through all array elements
        for(i = 0; i < arrayNumber.length; i++)
        {
            // check whether the number is on the array
            if(arrayNumber[i] == number)
            {
                result = true;
            }
        }
        
        return result;
    }

    /*
     * Purpose: convert array of integer to string
     * Signature: input array of integers return string 
     * Examples: 
     * arrayToString({1, 2, 3}) returns "1,2,3"
     * arrayToString({1, 2, 3, 4}) returns "1,2,3,4"
     */
    private String arrayToString(int[] inputArray) 
    {
        String result= "";
        int i;
        
        // loop through all array elements
        for(i=0; i < inputArray.length; i++)
        {
            
            if (i < inputArray.length-1)
            {
                result = result + Integer.toString(inputArray[i]) + ",";
            }
            else
            {
                // Don't put come on the last one
                result = result + Integer.toString(inputArray[i]);
            }
            //System.out.println("result = " + result);
        }
        
        return result;
    }
    
    /*
     * Purpose: Ask user input number between 1 to 9.
     *          Then, assign them to array of integer. 
     * Signature: input nothing return array of integer 
     * Examples: 
     * inputUserPicks() return [2,7,5,8,4]
     * inputUserPicks() return [9,6,1,3,2]
     */
    public int[] inputUserPicks()
    {   
        LotteryApplication lottery = new LotteryApplication();
        // assume array size 5, lottery has 5 number from teacher example
        final int arraySize = 5;
        
        // Maximum and minimum number come from requirements
        final int minimumNumber = 1;
        final int maximumNumber = 9;
                                
        // array for user pick number and winning number by computer
        int[] userPicks = new int[arraySize];
                
        // initialized to big number out of ranged so it will end up in while loop
        int numberOfChoice = 99;
        int i;
        
        // scanner object for user's input
        Scanner input = new Scanner (System.in);
        System.out.println("Welcome to Lottery Application");
        
        // loop through all array elements
        for(i=0; i < arraySize; i++)
        {
            System.out.println("Enter number from 1 to 9 :");
            numberOfChoice = input.nextInt();
            
            // Make sure it generated number range from 1 to 9
            // From teacher requirements: 
            // Change inputUserPicks() so it only allows numbers between 1 and 9 incl.
            
            while( (numberOfChoice < minimumNumber) || (numberOfChoice > maximumNumber) )
            {
                System.out.println("Error. Please input number from 1 to 9 ! ");
                numberOfChoice = input.nextInt();
            }
            
            // From teacher requirements:
            // Change inputUserPicks() so it does not allow the same number to entered twice. 
            while (lottery.contains(userPicks, numberOfChoice)==true)
            {
                System.out.println("Error. Number already exists! ");
                System.out.println("Choose different number ! ");
                numberOfChoice = input.nextInt();
            }
            
            userPicks[i] = numberOfChoice;
        }
        
        input.close();
        
        return userPicks;
    } // end of inputUserPicks()
    
    /*
     * Purpose: Generate random number between 1 to 9.
     *          Then, assign them to array of integer. 
     * Signature: input nothing return array of integer 
     * Examples: 
     * pickWinningNumbers() return [1,4,6,9,3]
     * pickWinningNumbers() return [5,1,2,7,5]
     */
    public int[] pickWinningNumbers()
    {
        LotteryApplication lottery = new LotteryApplication();
        
        // assume array size 5, lottery has 5 number from teacher example
        final int arraySize = 5;
                                
        // array for user pick number and winning number by computer
        int[] winningNumbers = new int[arraySize];
        
        // for loop index
        int i;
        // create random object
        Random random = new Random();
        
        // Limit for random number and input for random number generated
        // Maximum and minimum number come from requirements
        final int minimumNumber = 1;
        final int maximumNumber = 9;
        int numberGenerated = ((maximumNumber - minimumNumber) + minimumNumber) + minimumNumber;

        // initialized to big number out of ranged so it will end up in while loop
        int randomNumber = 99;
        
        // loop through all array elements
        for(i=0; i < arraySize; i++)
        {
            // Make sure it generated number range from 1 to 9
            while( (randomNumber < minimumNumber) || (randomNumber > maximumNumber) )
            {
                // get random number
                randomNumber = random.nextInt(numberGenerated);
            }
            
            // Requirements:
            // Change pickWinningNumbers() so it does not allow the same number to entered twice. 
            while (lottery.contains(winningNumbers, randomNumber)==true)
            {
                randomNumber = random.nextInt(numberGenerated);
            }
            
            winningNumbers[i] = randomNumber;
        }
        return winningNumbers;
    } // end of pickWinningNumbers()
    
    
    /*
     * Purpose: Count the match number between 2 input array.
     *          Then, it returns count of match number 
     * Signature: input two arrays of integer return integer 
     * Examples: 
     * getNumberOfMatches(userPicks, winningNumbers) return 1
     * getNumberOfMatches(userPicks, winningNumbers) return 3
     */
    public int getNumberOfMatches (int[] userPicks, int[] winningNumbers)
    {
        // assume array size 5, lottery has 5 number from teacher example
        final int arraySize = 5;
        
        // index for loop
        int i,j;
        
        // report how many number match
        int matchCount = 0;
        
        // loop through user pick up number with index i
        for(i = 0 ; i < userPicks.length ; i++)
        {
            // loop through winning number with index j
            for (j = 0; j < winningNumbers.length ; j++)
            {
                if(userPicks[i]==winningNumbers[j])
                {
                    ++matchCount;
                }
            }
        }
        // return count of match number
        return matchCount;
    }  // end of getNumberOfMatches

} // end of class LotteryApplication
