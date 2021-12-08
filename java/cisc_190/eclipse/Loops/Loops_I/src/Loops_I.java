import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Loops_I {


    // Sample input = 2
    /*
     Objective
        In this challenge, we're going to use loops to help us do some simple math.
    Task
        Given an integer, , print its first  multiples. Each multiple  (where ) should be printed on a new line in the form: N x i = result.
    Input Format
        A single integer, .
     Constraints
     Output Format
     Print  lines of output; each line  (where ) contains the  of  in the form:
     
        N x i = result.
    */
    

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int N = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        if(N >= 2 && N <= 20){

            for(int i = 1; i <= 10; i++){

                int result = N * i;
            
                    if(i == 10){
                        System.out.print(N + " x " + i + " = " + result);
                    }else{
                        System.out.println(N + " x " + i + " = " + result);
                    }


            }


        }
  
        scanner.close();
    }
}