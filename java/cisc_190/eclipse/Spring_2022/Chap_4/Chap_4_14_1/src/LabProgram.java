import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      		Scanner scnr = new Scanner (System.in);
		
		int max = 0;
		double avg = 0;
		int total = 0;
		int count = 0;
		
		int i;
		
		i = scnr.nextInt();

		while (i>-1) {
			count++;
			if(max<i) {
				max=i;
			}
			total += i;
			i = scnr.nextInt();
		}
		avg = total / (double) count;
		System.out.print(max + " ");
      System.out.printf("%.2f\n", avg);
   }
}