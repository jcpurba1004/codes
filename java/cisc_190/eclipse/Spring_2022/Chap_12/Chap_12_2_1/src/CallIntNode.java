public class CallIntNode {
   public static void main(String[] args) {
      IntNode headObj = null;
      IntNode node1 = null;
      IntNode node2 = null;
      IntNode node3 = null;
      IntNode node4 = null;
      IntNode currObj = null;

      headObj = new IntNode(-1);

      node1 = new IntNode(1);
      headObj.InsertAfter(node1);

      node2 = new IntNode(2);
      node1.InsertAfter(node2);

      node3 = new IntNode(3);
      node1.InsertAfter(node3);

      node4 = new IntNode(4);
      node3.InsertAfter(node4);

      currObj = headObj;

      while (currObj != null) {
         currObj.PrintData();
         currObj = currObj.GetNext();
      }
   }
}