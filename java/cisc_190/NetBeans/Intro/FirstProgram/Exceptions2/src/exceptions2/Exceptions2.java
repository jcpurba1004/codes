package exceptions2;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
public class Exceptions2 {

    public static void main(String[] args) throws FileNotFoundException {
        File file = new File("file.txt");
        
        Scanner sc = new Scanner(file);
       
        System.out.println("We made it here!");
        }
    }