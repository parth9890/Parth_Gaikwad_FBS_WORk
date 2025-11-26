import java.util.Scanner;

class Admain {
	int id;
	String name;
	double salary, allowances;

	void setid(int a) {
		this.id = a;
	}

	void setname(String b) {
		this.name = b;
	}

	void setsalary(double c) {
		this.salary = c;
	}

	void setallowances(double d) {
		this.allowances = d;
	}

	int getid() {
		return this.id;
	}

	String getname() {
		return this.name;
	}

	double getsalary() {
		return this.salary;
	}

	double getallowances() {
		return this.allowances;
	}

	void display() {
		System.out.println("ID = " + this.id);
		System.out.println("Name = " + this.name);
		System.out.println("Salary = " + this.salary);
		System.out.println("Allowances = " + this.allowances);
	}
}

 class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		Admain a1 = new Admain();

		System.out.print("Enter ID: ");
		int id = sc.nextInt();

		sc.nextLine(); 

		System.out.print("Enter Name: ");
		String name = sc.nextLine();

		System.out.print("Enter Salary: ");
		double salary = sc.nextDouble();

		System.out.print("Enter Allowances: ");
		double allowances = sc.nextDouble();

		
		a1.setid(id);
		a1.setname(name);
		a1.setsalary(salary);
		a1.setallowances(allowances);

		System.out.println("\nEmployee Details");
		a1.display();

		sc.close();
	}
}
