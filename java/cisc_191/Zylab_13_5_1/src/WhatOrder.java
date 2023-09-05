import java.util.Scanner;

public class WhatOrder {
   public static <T extends Comparable<T>> int checkOrder(T n1, T n2, T n3, T n4) {
        if (n1.compareTo(n2) > 0 && n2.compareTo(n3) > 0 && n3.compareTo(n4) > 0) {
            return 1;
        } else if (n1.compareTo(n2) < 0 && n2.compareTo(n3) < 0 && n3.compareTo(n4) < 0) {
            return -1;
        } else {
            return 0;
        }
   }

   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);

      // Check order of four strings
      System.out.println("Order: " + checkOrder(scnr.next(), scnr.next(), scnr.next(), scnr.next())); 

      // Check order of four doubles
      System.out.println("Order: " + checkOrder(scnr.nextDouble(), scnr.nextDouble(), scnr.nextDouble(), scnr.nextDouble()));
   }
}