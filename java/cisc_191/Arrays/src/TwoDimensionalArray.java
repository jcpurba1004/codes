public class TwoDimensionalArray {

	public static void main(String[] args) {
		int[][] TwoDim = new int[4][3];
		int x = 0;
		for(int i = 0; i < 4; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				TwoDim[i][j] = x;
				x++;
			}
		}
		for(int i = 0; i < 4; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				System.out.print(TwoDim[i][j] + " ");
			}
			System.out.println();
		}
	}
}