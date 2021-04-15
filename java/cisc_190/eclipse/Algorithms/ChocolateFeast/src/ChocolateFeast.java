import java.util.*;

public class ChocolateFeast {

	static int maximumChocolates(int n, int c, int m) {
        
        int cupcakes = n / c;

        int totalCupcakes = cupcakes;

        while (cupcakes >= m) {
            cupcakes -= m;

            totalCupcakes++;
            cupcakes++;
        }

        return totalCupcakes;
    }
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int i = 0; i < t; i++){
            System.out.println(maximumChocolates(in.nextInt(), in.nextInt(), in.nextInt()));
        }
        in.close();
    }
}