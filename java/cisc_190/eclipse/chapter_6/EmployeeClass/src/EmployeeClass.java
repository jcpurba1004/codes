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

public class EmployeeClass{

	private String name;
	private int idNumber;
	private String department;
	private String position;
	
	public void setName( String nameGiven ) {
		name = nameGiven;
	}
	
	public void setIdNumber( int idNumberGiven ) {
		idNumber = idNumberGiven;
	}
	
	public void setIdNumber( String idNumberGiven ) {
		idNumber = Integer.parseInt( idNumberGiven );
	}
	
	public void setDepartment( String departmentGiven ) {
		department = departmentGiven;
	}
	
	public void setIdNumber( int positionGiven ) {
		position = positionGiven;
	}
	
	public String getName() {
		return name;
	}
	
	public int getIdNumber() {
		return idNumber;
	}
	
	public String getDepartment() {
		return department;
	}
	
	public String getPosition() {
		return name;
	}
	
	public Employee( String employeeName, int employeeIdNumber, String employeeDepartment, employeePosition ) {
		name = employeeName;
		idNumber = employeeIdNumber;
		department = employeeDepartment;
		position = employeePosition;
	}
	
	public Employee( String employeeName, int employeeIdNumber ) {
		name = employeeName;
		idNumber = employeeIdNumber;
		department = "";
		position = "";
	}
	
	public Employee() {
		name = "";
		idNumber = 0;
		department = "";
		position = "";
	}
	
	public static void main(String[] args) {
		

	}
}