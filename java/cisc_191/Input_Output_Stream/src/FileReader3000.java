import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class FileReader3000 {

	public static void main(String[] args) throws IOException {
		
		//http://textfiles.com/100/captmidn.txt
		
		File file = new File("/Users/JeremiahPurba/Desktop/captmidn.txt");
		Scanner scan = new Scanner(file);
		
		String fileContent = "THIS IS A NEW FILE MADE BY US";
		while(scan.hasNextLine()) {
			fileContent = fileContent.concat(scan.nextLine() + "\n");
		}
		
		FileWriter writer = new FileWriter("/Users/JeremiahPurba/Desktop/newfile.txt");
		writer.write(fileContent);
		writer.close();
	}
}