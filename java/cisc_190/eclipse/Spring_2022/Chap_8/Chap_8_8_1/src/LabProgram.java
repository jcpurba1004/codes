import java.util.Scanner;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.PrintWriter;
import java.io.IOException;

public class LabProgram {

	public static void main(String[] args) throws IOException {
		Scanner scnr = new Scanner(System.in);
		
		FileInputStream fileByteStream = null;
		FileOutputStream fileOutputStream = null;
		PrintWriter outFS = null;
		
		Scanner inFS = null;
		String firstName;
		String lastName;
		int midterm1=0;
		int midterm1Total = 0;
		double midterm1Average = 0.0;
		int midterm2=0;
		int midterm2Total=0;
		double midterm2Average = 0.0;
		int finalExam=0;
		int finalExamTotal=0;
		double finalAverage=0.0;
		int count = 0;
		int average=0;
		String fileName;
		char grade = 'x';

		// Try to open input file:
		//System.out.println("Enter file name: ");
		fileName = scnr.nextLine();
		fileByteStream = new FileInputStream(fileName);
		inFS = new Scanner(fileByteStream);
		
		// Try to open output file:
		fileOutputStream = new FileOutputStream("report.txt");
		outFS = new PrintWriter(fileOutputStream);
		
		while(inFS.hasNext()) {
			lastName = inFS.next();
			firstName = inFS.next();
			++count;
			midterm1 = inFS.nextInt();
			midterm1Total = midterm1Total + midterm1;
			
			midterm2 = inFS.nextInt();
			midterm2Total = midterm2Total + midterm2;
			
			finalExam = inFS.nextInt();
			finalExamTotal = finalExamTotal + finalExam;
			
			average = ((midterm1 + midterm2 + finalExam)/3);
			if(average < 60) {
				grade = 'F';
			}
			else if((average>=60) && (average<70)) {
				grade = 'D';
			}
			else if((average>=70) && (average<80)) {
				grade = 'C';
			}
			else if((average>=80) && (average<90)) {
				grade = 'B';
			}
			else if(average >= 90) {
				grade = 'A';
			}
				
			System.out.println(lastName + "\t" + firstName + "\t" + midterm1 + "\t" + 
					midterm2 + "\t" + finalExam + "\t" + grade);
			outFS.println(lastName + "\t" + firstName + "\t" + midterm1 + "\t" + 
					midterm2 + "\t" + finalExam + "\t" + grade);
			
			
		}

		//System.out.println("total = " + (double)count);
		//System.out.println(midterm1Total + " " + midterm2Total +" "+finalExamTotal);
		midterm1Average = midterm1Total / (double)count;
		midterm2Average = midterm2Total / (double)count;
		finalAverage = finalExamTotal / (double)count;
		
		System.out.printf("\nAverages: Midterm1 %.2f", midterm1Average);
		System.out.printf(", Midterm2 %.2f", midterm2Average);
		System.out.printf(", Final %.2f\n", finalAverage);
		
		outFS.printf("\nAverages: Midterm1 %.2f", midterm1Average);
		outFS.printf(", Midterm2 %.2f", midterm2Average);
		outFS.printf(", Final %.2f\n", finalAverage);
		
		fileByteStream.close();
		outFS.close();
	}
}