public class MileageTrackerNode {
   private double miles;                                                                 
   private String date;          
   private MileageTrackerNode nextNodeRef;                              

   public MileageTrackerNode() {
      miles = 0.0;
      date = "";
      nextNodeRef = null;
   }
                                                                                     
   public MileageTrackerNode(double milesInit, String dateInit) {
      this.miles = milesInit;
      this.date = dateInit;
      this.nextNodeRef = null;
   }
                                                                                     
   public MileageTrackerNode(double milesInit, String dateInit, MileageTrackerNode nextLoc) {
      this.miles = milesInit;
      this.date = dateInit;
      this.nextNodeRef = nextLoc;
   }

   public void insertAfter(MileageTrackerNode nodeLoc) {
      MileageTrackerNode tmpNext;

      tmpNext = this.nextNodeRef;
      this.nextNodeRef = nodeLoc;
      nodeLoc.nextNodeRef = tmpNext;
   }
                                                            
   public MileageTrackerNode getNext() {
      return this.nextNodeRef;
   }

   public void printNodeData() {
      System.out.println(this.miles + ", " + this.date);
   }
}