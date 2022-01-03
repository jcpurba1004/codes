import java.awt.Dimension;

import javax.swing.JPanel;

public class GamePanel extends JPanel {

	
	public static final long serialVersionUID = 1L;		
	
	public static final int WIDTH = 500, HEIGHT = 500;
	
	public GamePanel() {
		
		setPreferredSize(new Dimension(WIDTH, HEIGHT));
	}
	
}