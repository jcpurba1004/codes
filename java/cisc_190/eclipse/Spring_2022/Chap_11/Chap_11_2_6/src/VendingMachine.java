import java.util.Scanner;
import java.util.InputMismatchException;

public class VendingMachine {
        public static void main(String[] args) {
                Scanner scnr = new Scanner(System.in);
                int maxNumPeople = 10;
                int totalNumPeople = 0;
                // looping as long as totalNumPeople is below maxNumPeople
                while (totalNumPeople < maxNumPeople) {
                        // defining a catch block
                        try {
                                // reading an integer, adding to totalNumPeople if read is successful
                                totalNumPeople += scnr.nextInt();
                                // preventing totalNumPeople going negative. remove this if you don't need.
                                if (totalNumPeople < 0) {
                                        totalNumPeople = 0;
                                }
                                // displaying occupancy
                                System.out.println("Occupancy: " + totalNumPeople);
                        } catch (InputMismatchException e) {
                                // InputMismatchException is caught. reading off one string
                                scnr.next();
                                // printing an error message (remove if not needed)
                                System.out.println("Error");

                        }
                }
                System.out.println("We're full!");
        }
}