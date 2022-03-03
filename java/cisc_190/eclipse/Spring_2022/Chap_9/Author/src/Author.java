public class Author extends Employee {
   private String genre;

   public void setGenre(String setGenre) {
      genre = setGenre;
   }

   @Override
   public void printInfo() {
      System.out.println(name + " writes " + genre);
   }
}