// Computer Class
// Quiz 2 - Java for Programmers
//Wesley Dillingham


public class Computer {
	
	public String processor;
	public double ramSize;
	
	// constructor
	public Computer(String proc, double ram) {
		processor = proc;
		ramSize = ram;
	}
	
	// accessors
	public double getRamSize() { return ramSize; }
	public String getProcessor() { return processor; }
	
	// mutators
	public void setRamSize(double ram) { ramSize = ram; }
	public void setProcessor(String proc) { processor = proc; }
	
	// toString method
	public String toString() {
		return " RAM: " + ramSize + " Proc: " + processor;
	}
	
}

 class Laptop extends Computer //child class of computer
{

	//additional fields 
	private double weight;
	private double driveSize;
	
	
	//constructor
	
	public Laptop(String processor_, double ramSize_, double weight_, double driveSize_)
	{
//	Computer(processor_, ramSize_);
	super(processor_, ramSize_);
	driveSize = driveSize_;
	ramSize = ramSize_;
	weight = weight_;
	driveSize = driveSize_;
	} 



//accessors
	public double getWeight()
	{
		return weight; 
	}
	public double getDriveSize()
	{
		return driveSize;
	}
	
	//mutators
	public void setWeight(double weight_)
	{
		weight = weight_;
	}
	public void setDriveSize(double driveSize_)
	{
		driveSize = driveSize_;
	}
	
		// toString method over ridden
	public String toString() {
		return " RAM: " + ramSize + " Proc: " + processor + " Weight " + weight + " Drive Size " + driveSize;
		}

	
	
}
