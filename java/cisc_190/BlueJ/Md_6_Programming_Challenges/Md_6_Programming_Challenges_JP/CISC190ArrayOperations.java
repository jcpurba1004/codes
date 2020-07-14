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
 * Version: 1.4 (07/13/2020)
 */


/**
 * Class Name: CISC190ArrayOperations
 * Purpose   : 1. Check the input value whether it's on the array
 *                then return the boolean results whether it's true
 *                or wrong
 *             2. convert integer array to string  
 */
public class CISC190ArrayOperations 
{

    public static void main(String[] args) 
    {
        // containResult is for contain method result
        boolean containResult;
        // stringResult is for contain method result
        String stringResult = "";
        int[] inputArray = new int[] { 1, 2, 3 };
        int[] inputArrayTwo = new int[] { 1, 2, 3, 4 };

        int integerNumber;
        
        // Test the first function, contains( ... , ...)
        integerNumber = 2;
        containResult = contains ( inputArray , integerNumber);
        
        // validate the result
        if(containResult==true)
        {
            System.out.println("input array contains " + integerNumber);
        }
        else
        {
            System.out.println("input array does not contain " + integerNumber);
        }
        
        integerNumber = 4;
        containResult = contains ( inputArray , integerNumber);
        if(containResult==true)
        {
            System.out.println("input array contains " + integerNumber);
        }
        else
        {
            System.out.println("input array does not contain " + integerNumber);
        }
        
        stringResult = arrayToString(inputArray);
        System.out.println("result = " + stringResult);
        
        stringResult = arrayToString(inputArrayTwo);
        System.out.println("result = " + stringResult);

    }
    
    /*
     * Purpose: check the input number whether it's on the 
     *          array or not. Return the results as boolean
     *          whether it's true or not
     * Signature: input array of integers and integer, return boolean 
     * Examples: 
     * contains({1, 2, 3}, 2) returns true
     * contains({1, 2, 3}, 4) returns false
     */
    public static Boolean contains  (int [] arrayNumber, int number)
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
     * Signature: input array of integers return boolean 
     * Examples: 
     * arrayToString({1, 2, 3}) returns "1,2,3"
     * arrayToString({1, 2, 3, 4}) returns "1,2,3,4"
     */
    private static String arrayToString(int[] inputArray) 
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
                // Don't put comma on the last one
                result = result + Integer.toString(inputArray[i]);
            }
        }
        
        return result;
    }  // end of arrayToString (...)
    
}
