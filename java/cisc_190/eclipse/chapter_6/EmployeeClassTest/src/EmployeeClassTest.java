/*
  
Problem 6.1: Employee Class
  
Write a class named Employee that has the following fields:

* name. The name field references a String object that holds the employee's name.
* idNumber. The idNumber is an int variable that holds the employee's ID number.
* department. The department field references a String object that holds the name of the department where the employee works.
* position. The position field references a String object that holds the employee's job title.

The class should have the following constructors:

* A constructor that accepts the following values as arguments and assigns them to the appropriate fields: employee's name,
employee's ID number, department and position
* A constructor that accepts the following values as arguments and assigns them to the appropriate fields: employee's name
and ID number. The department and position
fields should be assigned an empty string ("").
* A no-arg constructor that assigns empty strings ("") to the name, department and position fields and 0 to the idNumber field.

Write appropriate mutator methods that store values in these fields and accessor methods that return the values in these fields.
Once you have written the class, write a separate program that creates three employee objects to hold the following data:

Name             ID Number     Department         Position
Susan Meyers     47899         Accounting         Vice President
Mark Jones       39119         IT                 Programmer
Joy Rogers       81774         Manufacturing      Engineer
  
The program should store this data in the three objects and then display the data for each employee on the screen.
  
*/

public class EmployeeClassTest{
	public static void main(String[ ] args) {
		
		Employee employee1 = new Employee();
		Employee employee2 = new Employee( "Mark Jones", 39119);
		Employee employee3 = new Employee( "Joy Rogers", 81774, "Manufacturing", "Engineer" );
		
		employee1.setName( "Susan Meyers" );
		employee1.setIdNumber( 47899 );
		employee1.setDepartment( "Accounting" );
		employee1.setPosition( "Vice President" );
		
		employee2.setDepartment( "IT" );
		employee2.setPosition( "Programmer" );
		
		System.out.println( "Name\t\tID Number\t\tDepartment\t\tPosition" );
		System.out.println( employee1.getName() + "\t" + employee1.getIdNumber() + "\t\t\t" + employee1.getDepartment() +
		"\t\t" + employee1.getPosition() );
		System.out.println( employee2.getName() + "\t" + employee2.getIdNumber() + "\t\t\t" + employee2.getDepartment() +
		"\t\t\t" + employee2.getPosition() );
		System.out.println( employee3.getName() + "\t" + employee3.getIdNumber() + "\t\t\t" + employee3.getDepartment() +
		"\t\t" + employee3.getPosition() );
	}
}