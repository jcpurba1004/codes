import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class MyFrame extends JFrame {
	
	JButton button;
	JLabel label;
	
	MyFrame() {
		
		JButton button = new JButton();
		button.setBounds(100, 100, 250, 100);
		button.addActionListener(e -> System.out.println("poo"));
		button.setText("I'm a button!");
		button.setFocusable(false);
		
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setLayout(null);
		this.setSize(500, 500);
		this.setVisible(true);
		this.add(button);
	}
	
	public void actionPerformed(ActionEvent e) {
		if(e.getSource()==button) {
			// System.out.println("poo");
			// button.setEnabled(false);
			label.setVisible(true);
		}
	}
}