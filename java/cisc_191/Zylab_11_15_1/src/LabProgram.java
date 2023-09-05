import java.util.Scanner;

public class LabProgram {

    public static void printLinkedList(IntNode headNode){

        //This just prints the current value
        headNode.printData();
        headNode.insertAfter(headNode.getNext());
        headNode.printData();
    }

    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        int size;
        int value;

        size = scnr.nextInt();
        value = scnr.nextInt();
        IntNode headNode = new IntNode(value); // Make head node as the first node
        IntNode lastNode = headNode;      // Node to add after
        IntNode newNode = null;           // Node to create

        // Insert the second and the rest of the nodes
        for (int n = 0; n < size - 1; ++n) {
            value = scnr.nextInt();
            newNode = new IntNode(value);
            lastNode.insertAfter(newNode);
            lastNode = newNode;
        }

        // Call printLinkedList() with the head node
        printLinkedList(headNode);
    }
}