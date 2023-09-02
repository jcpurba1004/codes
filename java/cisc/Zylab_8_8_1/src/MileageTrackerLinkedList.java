import java.util.Scanner;

public class MileageTrackerLinkedList {
   public static void main (String[] args) {
      Scanner scnr = new Scanner(System.in);
     

      // References for MileageTrackerNode objects
      MileageTrackerNode headNode;                                           
      MileageTrackerNode currNode;
      MileageTrackerNode lastNode;

      double miles;
      String date;
      int i;
      int count;

      // Front of nodes list                                                                         
      headNode = new MileageTrackerNode();
      lastNode = headNode;

      // TODO: Scan the number of nodes
      count = scnr.nextInt();
         
      // TODO: For the scanned number of nodes, scan
      //       in data and insert into the linked list
      for (i = 0; i < count; ++i) {
         miles = scnr.nextDouble();
         date = scnr.nextLine();
         currNode = new MileageTrackerNode(miles, date);
         lastNode.insertAfter(currNode);
         lastNode = currNode;
      }
      
            

      // TODO: Call the printNodeData() method 
      //       to print the entire linked list
      for (i = 0; i < count; ++i) {
         headNode.printNodeData();
         headNode.getNext();
      }
            
   }
}