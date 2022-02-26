public class Media implements AudioVisual, Show {
   String name;
   String director;

   public void setName(String setName) {
      name = setName;
   }

   public void setDirector(String setDirector) {
      director = setDirector;
   }

   @Override
   public void printName() {
      System.out.println(name);
   }

   @Override
   public void printDirector() {
      System.out.println("Director: " + director);
   }
}