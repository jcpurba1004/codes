import java.util.Scanner;
import java.util.ArrayList;

public class PhotoLineups {

        public static void printAllPermutations(ArrayList<String> permList, ArrayList<String> nameList){
        int size = nameList.size();
        int index = 0;

        for(int i = size; i > 1; i--)
            size = size * (i - 1);
        System.out.println("Size: " +size); //Temp

        if(index != size){
            for(int i = 0; i < nameList.size(); i++){
                
                index++;
            }
        }
    }

    public static void main(String[] args){
        Scanner scnr = new Scanner(System.in);
        ArrayList<String> nameList = new ArrayList<String>();
        ArrayList<String> permList = new ArrayList<String>();
        String name;
        int i = 0;
        
        while(i != -1){
            name = scnr.next();
            nameList.add(name);
            if(name.equals("-1"))
                i = -1;
        }
        nameList.remove(nameList.size() - 1);
        System.out.println("nameList: " + nameList); 

        printAllPermutations(permList, nameList);
    }
}