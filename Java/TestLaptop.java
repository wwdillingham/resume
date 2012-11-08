// TestLaptop
// Test the Laptop class for Problem3
// Quiz 2 - Java for Programmers

public class TestLaptop {
	// run all tests in the main
	public static void main(String [] args) {
		// create a Laptop object
		Laptop myLaptop = new Laptop("Pentium 4",512,6.5,80);
		
		// list the values
		System.out.println("Starting values: " + myLaptop.toString());
		
		// change the values using mutators
		myLaptop.setProcessor("Pentium V");
		myLaptop.setRamSize(2048);
		myLaptop.setWeight(7.0);
		myLaptop.setDriveSize(200);
		
		// list the values
		System.out.println("After upgrade: " + myLaptop.toString());
		
		int myarray[] = {5,3,2,1}; 
	}
}