import java.awt.Color;
import javax.swing.ImageIcon;
import javax.swing.JFrame;

public class Main {

	public static void main(String[] args) {
		
		// JFrame = A GUI window to add components to
		/*
		JFrame frame = new JFrame(); // Creates a frame
		frame.setTitle("JFrame title goes here"); // Sets title of frame
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // Exit out of application
		frame.setResizable(false); // Prevent frame from being resized
		frame.setSize(420, 420); // Sets the x-dimension and y-dimension of frame
		frame.setVisible(true); // Make frame visible
		
		ImageIcon image = new ImageIcon("logo.png"); // Create an ImageIcon
		frame.setIconImage(image.getImage()); // Change icon of frame
		frame.getContentPane().setBackground(new Color(123, 50, 250)); // Change color of background
		*/
		
		MyFrame myFrame = new MyFrame();
	}
}