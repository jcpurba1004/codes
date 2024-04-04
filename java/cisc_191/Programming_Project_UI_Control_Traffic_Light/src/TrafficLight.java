import java.awt.*;
import java.awt.event.*;

public class TrafficLight extends Frame implements ActionListener {

    private Button redButton, yellowButton, greenButton;
    private Label lightLabel;

    public TrafficLight() {
        super("Traffic Light");

        setLayout(new FlowLayout());

        redButton = new Button("Red");
        yellowButton = new Button("Yellow");
        greenButton = new Button("Green");
        lightLabel = new Label("No light");

        add(redButton);
        add(yellowButton);
        add(greenButton);
        add(lightLabel);

        redButton.addActionListener(this);
        yellowButton.addActionListener(this);
        greenButton.addActionListener(this);

        setSize(300, 100);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == redButton) {
            lightLabel.setText("Red");
        } else if (e.getSource() == yellowButton) {
            lightLabel.setText("Yellow");
        } else if (e.getSource() == greenButton) {
            lightLabel.setText("Green");
        }
    }

    public static void main(String[] args) {
        new TrafficLight();
    }
}