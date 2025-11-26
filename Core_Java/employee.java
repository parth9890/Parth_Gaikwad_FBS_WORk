import java.util.Scanner;
class Emp
{
	int emp_id;
	String name;
	double salary;
	
	int getemp_id()
	{
		return this.emp_id;
	}
	String getname()
	{
		return this.name;
	}
	double salary()
	{
		return this.salary;
	}

	void setemp_id(int id)
	{
		this.emp_id=id;
	}
	void setname(String name)
	{
		this.name=name;
	}
	void setsalary(double salary)
	{
		this.salary=salary;
	}
	void display()
	{
		System.out.println("emp_id="+this.emp_id+  "emp_name="+this.name+  "salary="+this.salary);
	}
	Emp()
	{
		System.out.println("default");
		this.emp_id=2;
		this.name="Parth";
		this.salary=40000;
	}
	Emp(int id,String name,double salary)
	{
		System.out.println("parametar");
		this.emp_id=id;
		this.name=name;
		this.salary=salary;
	}	
		

		


}// class Emp end here
class Test
{
	public static void main(String args[])//main class start here
	{
		Scanner sc = new Scanner(System.in);

		
		Emp e1 = new Emp();
		e1.display();

		
		System.out.print("Enter employee ID: ");
		int id = sc.nextInt();

		sc.nextLine(); 
		System.out.print("Enter employee name: ");
		String name = sc.nextLine();

		System.out.print("Enter salary: ");
		double salary = sc.nextDouble();

		Emp e2 = new Emp(id, name, salary);
		e2.display();

		
		
		
		

	}//main class end here
}//class Test end here