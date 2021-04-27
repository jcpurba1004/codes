package populationgrowth;

import java.io.*; // for PrintWriter and File classes
import java.util.Scanner; //for Scanner class

public class PopulationGrowth {
  
    public static void main(String[] args) 
            throws FileNotFoundException {
        //create a new PrintWriter called pw
        PrintWriter pw = new PrintWriter("results.txt");
        //send some text to the output file
        pw.println("SAN DIEGO POPULATION GROWTH");
        pw.println("each ' represents 10000 people\n");
        
        Scanner sc = new Scanner(System.in);
        String filename; // for user to specify the name with data
        int population; // to hold the population
        System.out.println("Which file contains the population data?");
        //filename will be given by user
        filename = sc.nextLine();
        //create a new File object based on the filename given by the user
        File file = new File(filename);
        //create a new Scanner object based in the file whose name is filename
        Scanner inputFile = new Scanner(file);
        
        //hasNext method of Scanner class returns true if there is more to read
        while (inputFile.hasNext()) {
            population = inputFile.nextInt(); //nextInt returns the int to be read
            population = population / 10000; // one asterisk per 10000 individuals
            while (population > 0) {
                pw.print("'"); //print an '
                population--; // decrease $ of asterisks to print
            }
                    pw.println(); //print an empty line
        }
        pw.close(); //close the PrintWriter object for the output file
        inputFile.close(); //close the Scanner object for the input file
    }
}