import java.util.Scanner;

class Hrm {
	int id, salary;
	String name;
	double commission;

	void setid(int a) {
		this.id = a;
	}

	void setsalary(int b) {
		this.salary = b;
	}

	void setname(String c) {
		this.name = c;
	}

	void setcommission(double d) {
		this.commission = d;
	}

	int getid() {
		return this.id;
	}

	int getsalary() {
		return this.salary;
	}

	String getname() {
		return this.name;
	}

	double getcommission() {
		return this.commission;
	}

	void display() {
		System.out.println("ID = " + this.id);
		System.out.println("SALARY = " + this.salary);
		System.out.println("NAME = " + this.name);
		System.out.println("COMMISSION = " + this.commission);
	}
}

class Managment {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		Hrm h1 = new Hrm();

		System.out.print("Enter Employee ID: ");
		int id = sc.nextInt();

		System.out.print("Enter Salary: ");
		int salary = sc.nextInt();

		sc.nextLine();
		System.out.print("Enter Name: ");
		String name = sc.nextLine();

		System.out.print("Enter Commission: ");
		double commission = sc.nextDouble();

		h1.setid(id);
		h1.setsalary(salary);
		h1.setname(name);
		h1.setcommission(commission);

		System.out.println("\n--- Employee Details ---");
		h1.display();

		
	}
}
