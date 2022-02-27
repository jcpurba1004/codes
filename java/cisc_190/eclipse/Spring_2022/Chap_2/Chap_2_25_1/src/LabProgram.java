import java.util.Scanner;

public class LabProgram {
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		double x;
		double y;
		double z;
		
		double out1;
		double out2;
		double out3;
		double out4;
		
		x = scnr.nextDouble();
		y = scnr.nextDouble();
		z = scnr.nextDouble();
		
		out1 = Math.pow(x,  z);
		out2 = Math.pow(x, Math.pow(y,  z));
		out3 = Math.abs(y);
		out4 = Math.sqrt( Math.pow((x*y), z) );
		
		System.out.println(out1 + " " + out2 + " " + out3 + " " + out4);
	}
}