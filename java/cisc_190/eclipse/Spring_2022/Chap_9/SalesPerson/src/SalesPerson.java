public class Salesperson extends Employee {
   private String product;

   public void setProduct(String setProduct) {
      product = setProduct;
   }

   @Override
   public void printInfo() {
      System.out.println(name + " sells " + product);
   }
}