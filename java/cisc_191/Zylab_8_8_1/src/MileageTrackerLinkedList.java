import java.util.Scanner;

public class MileageTrackerLinkedList {
    public static void main (String[] args) {
        Scanner scnr = new Scanner(System.in);

        MileageTrackerNode headNode;
        MileageTrackerNode currNode = null;
        MileageTrackerNode lastNode;

        double miles;
        String date;
        int i;

        headNode = new MileageTrackerNode();
        lastNode = headNode;

        int n = scnr.nextInt();

        for(i = 0;i<n;i++){
            
            miles = scnr.nextDouble();
            scnr.nextLine();
            
            date = scnr.nextLine();

            if(i==0){
                headNode = new MileageTrackerNode(miles, date);
                currNode = headNode;
            }
            else{
                currNode.insertAfter(new MileageTrackerNode(miles, date));
                currNode = currNode.getNext();
            }
        }

        currNode = headNode;
        while (currNode!=null){
            currNode.printNodeData();
            currNode = currNode.getNext();
        }
    }
}