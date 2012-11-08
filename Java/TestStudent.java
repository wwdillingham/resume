// TestStudent
// Test the created Student class

public class TestStudent {
	// run test from inside main
	public static void main(String [] args) {
		// create the Student
		Student s1 = new Student("Bill", 43);
		
		// list the student
		System.out.println("Initial student values: " + s1.toString());
		
		// change the age to 3
		s1.setAge(3);
		
		// list the student
		System.out.println("After setAge(3): " + s1.toString());
		
		// change the age to 47
		s1.setAge(47);
		
		// list the student
		System.out.println("After setAge(47): " + s1.toString());
		
		// get the name
		System.out.println("getName returns: " + s1.getName());
		
		// get the age
		System.out.println("getAge returns: " + s1.getAge());
	}
}