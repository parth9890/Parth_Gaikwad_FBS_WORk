import java.util.Scanner;

class Placedstudent {
	String cname, designation;
	int distance, cid;

	// Setter methods
	void setcname(String a) {
		this.cname = a;
	}

	void setdesignation(String b) {
		this.designation = b;
	}

	void setdistance(int c) {
		this.distance = c;
	}

	void setcid(int s) {
		this.cid = s;
	}

	// Getter methods
	String getcname() {
		return this.cname;
	}

	String getdesignation() {
		return this.designation;
	}

	int getdistance() {
		return this.distance;
	}

	int getcid() {
		return this.cid;
	}

	// Display method
	void display() {
		System.out.println("Company ID: " + this.cid);
		System.out.println("Company Name: " + this.cname);
		System.out.println("Designation: " + this.designation);
		System.out.println("Distance: " + this.distance + " km");
	}

	// Default constructor
	Placedstudent() {
		System.out.println("Default constructor");
		this.designation = "Software Developer";
		this.cname = "Parth";
		this.cid = 5;
		this.distance = 10;
	}
}
 class Test {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		// Using default constructor
		Placedstudent p1 = new Placedstudent();
		p1.display();

		System.out.println("\nEnter new placed student details:");

		// Create a new object with user input using setters
		Placedstudent p2 = new Placedstudent(); // still uses default constructor, but we'll override values

		System.out.print("Enter Company ID: ");
		int cid = sc.nextInt();
		p2.setcid(cid);

		sc.nextLine(); // consume leftover newline

		System.out.print("Enter Company Name: ");
		String cname = sc.nextLine();
		p2.setcname(cname);

		System.out.print("Enter Designation: ");
		String designation = sc.nextLine();
		p2.setdesignation(designation);

		System.out.print("Enter Distance (in km): ");
		int distance = sc.nextInt();
		p2.setdistance(distance);

		System.out.println("\n--- Placed Student Details ---");
		p2.display();

		sc.close();
	}
}
