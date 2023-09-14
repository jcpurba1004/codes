import java.util.*;
import java.io.*;

public class LabProgram {
    // Read customer information from text file
    public static void readCustomerData(String [] names, String [] states, double [] debt) {
        // Read all data from file
        try {
            File f = new File("CustomerNames.csv");
            Scanner scnr = new Scanner(f);
            scnr.useDelimiter("[, \r\n]+");

            for (int index = 0; index < names.length; ++index) {
                names[index] = scnr.next();     // last name
                states[index] = scnr.next();    // state of residence
                debt[index] = scnr.nextDouble(); // amount of debt
            }
            scnr.close();
        }

        // Handle if data file not found
        catch(IOException e) {
            System.out.println("Failed to read the data file: " + e.getMessage());
        }
    }


    public static void main(String [] args) {
        Scanner scnr = new Scanner(System.in);
        int size;
        
        // Input # of customers and create parallel arrays
        size = scnr.nextInt();
        String [] names = new String[size];
        double [] debt = new double[size];
        String [] states = new String[size];

        // Step 1: Input debt limit, search phrase, and state abbreviation
        int debtLimit = scnr.nextInt();
        String searchPhrase = scnr.next();
        String stateAbbr = scnr.next();
        
        // Fill arrays with data from external file (described in another section)
        readCustomerData(names, states, debt);
        
        // Step 2: Find customer with highest debt
        int highestDebtIndex = 0;
        for (int i = 1; i < size; i++) {
            if (debt[i] > debt[highestDebtIndex]) {
                highestDebtIndex = i;
            }
        }
        String highestDebtName = names[highestDebtIndex];
        
        // Step 3: Count customer names that start with search phrase
        int startsWithCount = 0;
        for (int i = 0; i < size; i++) {
            if (names[i].startsWith(searchPhrase)) {
                startsWithCount++;
            }
        }
        
        // Step 4: Count customers with debt above debt limit and debt-free customers
        int debtOverLimitCount = 0;
        int debtFreeCount = 0;
        for (int i = 0; i < size; i++) {
            if (debt[i] > debtLimit) {
                debtOverLimitCount++;
            } else if (debt[i] == 0) {
                debtFreeCount++;
            }
        }
        
        // Step 5: Repeat steps 2-4 for customers in specified state
        int stateSize = 0;
        int stateDebtOverLimitCount = 0;
        int stateDebtFreeCount = 0;
        int stateStartsWithCount = 0;
        int stateHighestDebtIndex = 0;
        for (int i = 0; i < size; i++) {
            if (states[i].equals(stateAbbr)) {
                stateSize++;
                if (debt[i] > debt[ stateHighestDebtIndex]) {
                    stateHighestDebtIndex = i;
                }
                if (names[i].startsWith(searchPhrase)) {
                    stateStartsWithCount++;
                }
                if (debt[i] > debtLimit) {
                    stateDebtOverLimitCount++;
                } else if (debt[i] == 0) {
                    stateDebtFreeCount++;
                }
            }
        }
        String stateHighestDebtName = names[stateHighestDebtIndex];
        
        // Print reports for U.S. and specified state
        System.out.println("U.S. Report");
        System.out.println("Customers: " + size);
        System.out.println("Highest debt: " + highestDebtName);
        System.out.println("Customer names that start with \"" + searchPhrase + "\": " + startsWithCount);
        System.out.println("Customers with debt over $" + debtLimit + ": " + debtOverLimitCount);
        System.out.println("Customers debt free: " + debtFreeCount);
        
        System.out.println();
        System.out.println(stateAbbr + " Report");
        System.out.println("Customers: " + stateSize);
        System.out.println("Highest debt: " + stateHighestDebtName);
        System.out.println("Customer names that start with \"" + searchPhrase + "\": " + startsWithCount);
        System.out.println("Customers with debt over $" + debtLimit + ": " + stateDebtOverLimitCount);
        System.out.println("Customers debt free: " + stateDebtFreeCount);
    }
}