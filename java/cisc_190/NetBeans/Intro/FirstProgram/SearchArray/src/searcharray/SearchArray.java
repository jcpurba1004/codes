/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package searcharray;

import java.util.Scanner;

/**
 *
 * @author jpurba
 */
public class SearchArray {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        String[] books = {"To Kill a Mockingbird", "The King James Bible",
        "A Brief History of Time"};

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter book title to search catalog ");
        String lookup = sc.nextLine();
        int result = sequentialSearch(books, lookup);
        if (result != -1)
            System.out.println("The book is at position: " + result);
        else
            System.out.println("The book was not found.");
    }
    
    
    
    public static int sequentialSearch(String[] list, String target) {
        for (int i = 0; i < list.length; i++) {
            if (list[i].equalsIgnoreCase(target)) {
                return i;
            }
        }
        return -1;
    }
}