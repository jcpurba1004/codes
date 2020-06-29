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
 * Version: 1.3 (06/28/2020)
 */

// Needed for the Scanner class for input
import java.util.Scanner;

/**
 * Class Name: InternetServiceProvider
 * Purpose   : To calculate Internet Service Provider customer's monthly bill. 
 *             There are 3 packages for customer
 *             Package A: $9.95 / month with 10 hours access and $2/hour after that.
 *             Package B: $13.95 / month with 20 hours access and $1/hour after that.
 *             Package C: $19.95 / month with unlimited access.
 *             The code should ask user input for package that is used and number of
 *             the hours that are used.
 *             The code then compare the price if the user choose other packages.
 *             The code display the total charges and the comparison for other charges
 *             if other charges are cheaper. If there is no saving, no message should
 *             be printed
 */

public class InternetServiceProvider {

    public static void main(String[] args) {
        
        // Defines constant variable for packages, prices and time
        final double packageAFixedPrice = 9.95;
        final int packageAIncludedHours = 10;
        final double packageAPriceForAdditionalHours = 2.00;
        
        final double packageBFixedPrice = 13.95;
        final int packageBIncludedHours = 20;
        final double packageBPriceForAdditionalHours = 1.00;
        
        final double packageCFixedPrice = 19.95;
        
        // Defines variables for calculations
        double totalBillA = 0.00;
        double totalBillB = 0.00;
        double totalBillC = 0.00;
        double extraChargeA = 0.00;
        double extraChargeB = 0.00;
        
        // Variable for string input for user package
        String userPackage;
        
        // Variable for user's time to use internet calculation
        int userHours;
        int extraHours;

        // scanner object for user input
        Scanner input = new Scanner (System.in);
        
        // Ask user input package type and time is used on internet
        System.out.println("Enter the letter of the package you purchased (A, B, or C): ");
        userPackage = input.nextLine();
        
        System.out.println("Enter the amount of hours that were used: ");
        userHours = input.nextInt();
        
        // Compute for package A
        if(userHours > packageAIncludedHours)
        {
            extraHours = userHours - packageAIncludedHours;
            extraChargeA = extraHours * packageAPriceForAdditionalHours;
        }
        totalBillA = packageAFixedPrice + extraChargeA;
        
        
        // Compute for package B
        if(userHours > packageBIncludedHours)
        {
            extraHours = userHours - packageBIncludedHours;
            extraChargeB = extraHours * packageBPriceForAdditionalHours;
        }       
        totalBillB = packageBFixedPrice + extraChargeB;

        
        // Compute for package C
        totalBillC = packageCFixedPrice;
                
        // Check the package choice and compare the price. Display total cost to screen
        // and compare the price with other packages. Display the saved amount on screen
        switch (userPackage)
        {
        case "a":
        case "A":
            
            System.out.printf("Your cost: $ %.2f \n", totalBillA);
            if (totalBillA > totalBillB)
            {
                System.out.printf("With package B, you would have saved: = $ %.2f \n", totalBillA - totalBillB);
            }
            
            if (totalBillA > totalBillC)
            {
                System.out.printf("With package C, you would have saved: = $ %.2f \n", totalBillA - totalBillC);
            }
            
            break;
        case "b":
        case "B":   

            System.out.printf("Your cost: $ %.2f \n", totalBillB);
            if (totalBillB > totalBillA)
            {
                System.out.printf("With package A, you would have saved: = $ %.2f \n", totalBillB - totalBillA);
            }
            
            if (totalBillB > totalBillC)
            {
                System.out.printf("With package C, you would have saved: = $ %.2f \n", totalBillB - totalBillC);
            }
            
            break;
        case "c":
        case "C":
            
            System.out.printf("Your cost: $ %.2f \n", totalBillC);
            if (totalBillC > totalBillA)
            {
                System.out.printf("With package A, you would have saved: = $ %.2f \n", totalBillC - totalBillA);
            }
            
            if (totalBillC > totalBillB)
            {
                System.out.printf("With package B, you would have saved: = $ %.2f \n", totalBillC - totalBillB);
            }
            
            break;
        
        default:
            // error message if package type input wrong 
            System.out.printf("Error: Re-run the program and type A,B or C for package type \n");
            break;
        }
        
        input.close();
    }

}