/*
  
Problem 6.2: Car Class
  
Write a class named Car that has the following fields:
* yearModel. The yearModel field is an int that holds the car's year model.
* make. The make field references a String object that holds the make of the car.
* speed. The speed field is an int that holds the car's current speed.

*/

public class Car{
	
	private int yearModel;
	private String make;
	private int speed;
	
	public int getYearModel() {
		return yearModel;
	}
	
	public String getMake() {
		return make;
	}
	
	public int getSpeed() {
		return speed;
	}
	
	public void accelerate() {
		speed += 5;
	}
	
	public void brake() {
		speed -= 5;
	}
	
	public Car( int yearModelGiven, String makeGiven ) {
		yearModel = yearModelGiven;
		make = makeGiven;
		speed = 0;
	}
	
	public static void main(String[] args) {
		

	}
}