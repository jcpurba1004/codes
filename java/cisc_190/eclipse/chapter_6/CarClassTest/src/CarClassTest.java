/*
  
Problem 6.2: Car Class
  
Write a class named Car that has the following fields:
* yearModel. The yearModel field is an int that holds the car's year model.
* make. The make field references a String object that holds the make of the car.
* speed. The speed field is an int that holds the car's current speed.

*/

public class CarClassTest{
	public static void main(String[ ] args) {
		Car car1 = new Car( 2016, "Honda" );
		
		System.out.println( "Accelerating...");
		for( int seconds = 1; seconds <= 5; seconds++ ) {
			car1.accelerate();
			System.out.println( "Current speed of the" + car1.getYearModel() + " " + car1.getMake() + " is " 
							   car1.getSpeed() + " km/h" );
			
		System.out.println( "\nBraking...");
		for( int seconds = 1; seconds <= 5; seconds++ ) {
			car1.brake();
			System.out.println( "Current speed of the" + car1.getYearModel() + " " + car1.getMake() + " is " 
							   car1.getSpeed() + " km/h" );
		}
	}
}