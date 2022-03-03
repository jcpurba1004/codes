import java.util.ArrayList;

public class CallEmployee {
   public static void main(String[] args) {
      Employee person1;
      Salesperson person2;
      Author person3;

      ArrayList<Employee> personList = new ArrayList<Employee>();
      int i;

      person1 = new Employee();
      person1.setName("Amy");

      person2 = new Salesperson();
      person2.setName("Bill");
      person2.setProduct("art");

      person3 = new Author();
      person3.setName("Wes");
      person3.setGenre("dramas");

      personList.add(person2);
      personList.add(person1);
      personList.add(person3);

      for(i = 0; i < personList.size(); ++i){
         personList.get(i).printInfo();
      }
   }
}