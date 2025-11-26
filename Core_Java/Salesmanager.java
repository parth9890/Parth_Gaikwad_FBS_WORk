import java.util.Scanner;

class Salesmanager {
	int id, target;
	String name;
	double salary, incentive;

	// Getters
	int getid() { return this.id; }
	int gettarget() { return this.target; }
	String getname() { return this.name; }
	double getsalary() { return this.salary; }
	double getincentive() { return this.incentive; }

	// Setters
	void setid(int id) { this.id = id; }
	void settarget(int target) { this.target = target; }
	void setname(String name) { this.name = name; }
	void setsalary(double salary) { this.salary = salary; }
	void setincentive(double incentive) { this.incentive = incentive; }

	// Display method
	void display() {
		System.out.println("ID = " + this.id);
		System.out.println("Name = " + this.name);
		System.out.println("Salary = " + this.salary);
		System.out.println("Target = " + this.target);
		System.out.println("Incentive = " + this.incentive);
	}

	// Default constructor
	Salesmanager() {
		System.out.println("Default constructor called");
		this.id = 1;
		this.name = "Parth";
		this.salary = 40000;
		this.incentive = 20000;
		this.target = 5;
	}

	// Parameterized constructor
	Salesmanager(int id, String name, double salary, int target, double incentive) {
		System.out.println("Parameterized constructor called");
		this.id = id;
		this.name = name;
		this.salary = salary;
		this.target = target;
		this.incentive = incentive;
	}
}

class Test {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		// Using default constructor
		Salesmanager s1 = new Salesmanager();
		s1.display();

		System.out.println("\n--- Enter Salesmanager details ---");

		// User input for parameterized constructor
		System.out.print("Enter ID: ");
		int id = sc.nextInt();

		sc.nextLine(); // consume newline
		System.out.print("Enter Name: ");
		String name = sc.nextLine();

		System.out.print("Enter Salary: ");
		double salary = sc.nextDouble();

		System.out.print("Enter Target: ");
		int target = sc.nextInt();

		System.out.print("Enter Incentive: ");
		double incentive = sc.nextDouble();

		// Using parameterized constructor
		Salesmanager s2 = new Salesmanager(id, name, salary, target, incentive);
		s2.display();

	}
}
