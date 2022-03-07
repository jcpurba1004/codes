import java.util.Scanner;
import java.io.FileInputStream;
import java.io.IOException;

public class LabProgram {
   public static void main(String[] args) throws IOException {
      Scanner scnr = new Scanner(System.in);

      
		FileInputStream fileByteStream = null;
		Scanner inFS = null;
		String userWord;
		int wordFreq = 0;
		String currWord;
		String fileName;
		
		fileName = scnr.nextLine();
		// Try to open file:
		//System.out.println("Opening file ParkPhotos.txt.");
		fileByteStream = new FileInputStream(fileName);
		inFS = new Scanner(fileByteStream);
		
		//System.out.println("Content of ParkPhotos.txt: ");
		while(inFS.hasNext()) {
			currWord = inFS.next();
			//System.out.println(currWord);
			userWord = currWord.replaceAll("_photo.jpg", "_info.txt");
			System.out.println(userWord);
		}
		
		// Bone with file, so try to close it
		fileByteStream.close();
   }
}