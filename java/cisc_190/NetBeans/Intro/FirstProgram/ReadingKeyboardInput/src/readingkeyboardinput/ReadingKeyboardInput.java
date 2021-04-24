package readingkeyboardinput;


import java.util.Scanner;

public class ReadingKeyboardInput {
    
    public static void main(String[] args) {
        String name;
        int age;
        double income;
        
        Scanner keyboard = new Scanner(System.in);
        System.out.println("What is your name? ");
        name = keyboard.nextLine();
        
        System.out.println("What is your age? ");
        age = keyboard.nextInt();
        
        System.out.println("What is your annual income? ");
        income = keyboard.nextDouble();
        
        //Display the information back to the user.
        System.out.println("Hello, " + name + ". \nYour age is " +
                          age + " and your income is $" +
                          income);
    }   
}