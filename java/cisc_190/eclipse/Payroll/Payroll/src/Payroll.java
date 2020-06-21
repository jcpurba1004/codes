
public class Payroll {

	// instance variables - replace the example below with your own
    private int x;

    /**
     * Constructor for objects of class Payroll
     */
    public Payroll()
    {
        // initialize instance variables
        x = 0;
    }
	
	/**
     * An example of a method - replace this comment with your own
     *
     * @param  y  a sample parameter for a method
     * @return    the sum of x and y
     */
    public int add(int y, int z)
    {
        // put your code here
        return y + z;
    }

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int hours = 40;
        double grossPay, payRate = 25.0;
        int num = 30;
        int result; 
        
        Payroll MyPayroll = new Payroll ();
        
        result = MyPayroll.add(hours, num);
        grossPay = hours * payRate;
        
        System.out.println("Your pay rate is $" + payRate);
        System.out.println("Your hours is: " + hours);
        System.out.println("Your gross pay is $" + grossPay);
        System.out.println("Add output = " + result);
	}
}