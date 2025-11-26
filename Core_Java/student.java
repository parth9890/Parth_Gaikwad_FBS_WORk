import java.util.Scanner;

class Student {
	int rollno;
	String name;
	double marks;

	// Getter methods
	int getrollno() {
		return this.rollno;
	}

	String getname() {
		return this.name;
	}

	double getmarks() {
		return this.marks;  
	}

	// Setter methods
	void setrollno(int rollno) {
		this.rollno = rollno;
	}

	void setname(String name) {
		this.name = name;
	}

	void setmarks(double marks) {
		this.marks = marks;
	}

	void display() {
		System.out.println("Roll No = " + this.rollno);
		System.out.println("Name = " + this.name);
		System.out.println("Marks = " + this.marks);
	}

	
	Student() {
		System.out.println("Default constructor called");
		this.rollno = 1;
		this.name = "Om";
		this.marks = 70.0;
	}

	// Parameterized constructor
	Student(int rollno, String name, double marks) {
		System.out.println("Parameterized constructor called");
		this.rollno = rollno;
		this.name = name;
		this.marks = marks;
	}
}

 class Test {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		Student s1 = new Student();
		s1.display();

		System.out.println("\n** Enter Student Details **");

		System.out.print("Enter Roll No: ");
		int rollno = sc.nextInt();

		sc.nextLine(); 

		System.out.print("Enter Name: ");
		String name = sc.nextLine();

		System.out.print("Enter Marks: ");
		double marks = sc.nextDouble();

		Student s2 = new Student(rollno, name, marks);
		s2.display();

		
	}
}
