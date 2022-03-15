import java.util.ArrayList;

public class Driver {

	public static void main(String[] args) {
		
		Triangle t = new Triangle();
		Square s = new Square();
		Circle c = new Circle();
		
		ArrayList<Shape> shapes = new ArrayList<Shape>();
		
		shapes.add(c);
		shapes.add(t);
		shapes.add(s);
		
		for (int i=0; i<shapes.size(); i++)
			shapes.get(i).draw();
	}
}