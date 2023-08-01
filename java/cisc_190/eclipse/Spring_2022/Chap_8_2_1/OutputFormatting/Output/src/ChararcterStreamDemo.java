import java.io.FileInputStream;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class ChararcterStreamDemo {
	public static void main(String[] args) throws IOException {
		FileReader reader = null;
		FileWriter writer = null;
		try {
			FileReader readerStream = new FileReader("f:\\java-tutorials\\source.txt");
			FileWriter writerStream = new FileWriter("f:\\java-tutorials\\dest.txt");
			
// Reading source file and writing content to target file character by character.
			int content;
			while ((content = reader.read()) != -1) {
				writer.append((char) content);
			}
		} finally {
			if (reader != null) {
				reader.close();
			}
			if (writer != null) {
				writer.close();
			}
		}
	}
}