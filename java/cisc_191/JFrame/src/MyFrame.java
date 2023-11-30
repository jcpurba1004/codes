import javax.swing.JFrame;

import java.awt.Color;

import javax.swing.ImageIcon;
import javax.swing.JFrame;

public class MyFrame extends JFrame {

	MyFrame() {
		this.setTitle("JFrame title goes here"); // Sets title of this
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // Exit out of application
		this.setResizable(false); // Prevent this from being resized
		this.setSize(420, 420); // Sets the x-dimension and y-dimension of this
		this.setVisible(true); // Make this visible
		
		ImageIcon image = new ImageIcon("logo.png"); // Create an ImageIcon
		this.setIconImage(image.getImage()); // Change icon of this
		this.getContentPane().setBackground(new Color(123, 50, 250)); // Change color of background
	}
}