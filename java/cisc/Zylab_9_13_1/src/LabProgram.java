import java.util.Scanner;
import java.io.FileInputStream;
import java.io.IOException;

public class LabProgram {
   public static void main(String[] args) throws IOException {
      Scanner scnr = new Scanner(System.in);

      String csv = scnr.nextLine();

        Scanner fileScnr = new Scanner(new FileInputStream(csv));

        String oldName = "";

        while(fileScnr.hasNext()) {
            
            String line = fileScnr.nextLine();

            String[] tokens = line.split(",");
            String time = tokens[0];
            String name = tokens[1];
            String rating = tokens[2];
            
            if(!name.equals(oldName)) {
               
                if(!oldName.isEmpty()) {
                    System.out.println();
                }

                int endLength = Math.min(name.length(),44);
                System.out.printf("%-44s | %5s | %s", name.substring(0, endLength), rating, time);
            }
            
            else {
                System.out.print(" "+ time);
            }

            oldName = name;
        }

        scnr.close();
        fileScnr.close();
   }
}