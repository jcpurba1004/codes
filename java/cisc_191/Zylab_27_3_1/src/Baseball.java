import java.util.Scanner;

public class Baseball
{
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        int dodgers;
        int yankees;
        int orioles;
        dodgers = scnr.nextInt();
        yankees = scnr.nextInt();
        orioles = scnr.nextInt();
        System.out.println("Last night the Dodgers scored "+dodgers+",");
        System.out.println("the Yankees scored "+ yankees+ ", and");
        System.out.println("the Cubs scored "+orioles+".");
    }
}