import java.util.Scanner;

public class Midterm {

	public static int[] copy(int[] nums, int changeAmt) {
		   int[] modifiedNums = new int[nums.length * changeAmt];
		   int index;
		   for(index = 0; index < nums.length; ++index){
		      modifiedNums[index] = nums[index];
		   }
		   return modifiedNums;
		}  
		public static void main(String args[]) {
			int[] originalNums = {1,2,3,4,5};
			int[] copiedNums;
			copiedNums = copy(originalNums, 2);
			System.out.println(copiedNums);
		}

}
