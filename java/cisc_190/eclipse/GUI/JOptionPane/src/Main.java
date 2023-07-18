import javax.swing.JOptionPane;

public class Main {

	public static void main(String[] args) {
		
		// JOptionPane =    pop up a standard dialog box that prompts users for a value
		//                  or informs them of something.
		
		JOptionPane.showMessageDialog(null, "This is some useless info", "title", JOptionPane.PLAIN_MESSAGE);
		JOptionPane.showMessageDialog(null, "Here is more useless info :D", "title", JOptionPane.INFORMATION_MESSAGE);
		JOptionPane.showMessageDialog(null, "really?", null, JOptionPane.QUESTION_MESSAGE, null);
		JOptionPane.showMessageDialog(null, "Your computer has a VIRUS!!!", "title", JOptionPane.WARNING_MESSAGE);
		JOptionPane.showMessageDialog(null, "This is some useless info", "title", JOptionPane.ERROR_MESSAGE);
		
		String name = JOptionPane.showInputDialog("What is your name?: ");
		
	}
}