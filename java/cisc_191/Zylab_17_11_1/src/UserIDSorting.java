import java.util.Scanner;
import java.util.ArrayList;

public class UserIDSorting {
   
    public static int part(ArrayList<String> userIDs, int ii, int kk) {
        String pivot = userIDs.get((ii + kk) / 2); 
        while (ii <= kk) {
            while (userIDs.get(ii).compareTo(pivot) < 0) {
                ii++; 
            }
            while (userIDs.get(kk).compareTo(pivot) > 0) {
                kk--; 
            }
            if (ii <= kk) {
                
                String temp = userIDs.get(ii);
                userIDs.set(ii, userIDs.get(kk));
                userIDs.set(kk, temp);
                ii++;
                kk--;
            }
        }
        return ii; 
    }

    public static void quicksort(ArrayList<String> userIDs, int i, int k) {
        if (i < k) {
            int pivotIndex = part(userIDs, i, k); 
            quicksort(userIDs, i, pivotIndex - 1);
            quicksort(userIDs, pivotIndex, k); 
        }
    }

    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);

        ArrayList<String> userIDList = new ArrayList<String>();

        String userID;

        userID = scnr.next();
        while (!userID.equals("-1")) {
            userIDList.add(userID); 
            userID = scnr.next();
        }

        quicksort(userIDList, 0, userIDList.size() - 1);

        for (int i = 0; i < userIDList.size(); ++i) {
            System.out.println(userIDList.get(i));
        }
    }
}