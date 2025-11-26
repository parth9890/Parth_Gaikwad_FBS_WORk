import java.util.Scanner;

class Product {
	int id, quantity;
	String name;
	double price;

	// Getter methods
	int getid() {
		return this.id;
	}

	int quantity() {
		return this.quantity;
	}

	String name() {
		return this.name;
	}

	double price() {
		return this.price;
	}

	// Setter methods
	void setid(int a) {
		this.id = a;
	}

	void setquantity(int b) {
		this.quantity = b;
	}

	void setname(String c) {
		this.name = c;
	}

	void setprice(double d) {
		this.price = d;
	}

	// Display method
	void display() {
		System.out.println("PRODUCT ID IS = " + this.id);
		System.out.println("PRODUCT QUANTITY IS = " + this.quantity);
		System.out.println("PRODUCT NAME IS = " + this.name);
		System.out.println("PRODUCT PRICE IS = " + this.price);
	}

	// Default constructor
	Product() {
		System.out.println("Default constructor");
		this.id = 2;
		this.quantity = 5;
		this.name = "Mobile";
		this.price = 40000;
	}

	// Parameterized constructor
	Product(int id, int quantity, String name, double price) {
		System.out.println("Parameterized constructor");
		this.id = id;
		this.quantity = quantity;
		this.name = name;
		this.price = price;
	}
}

class Test {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		// Using default constructor
		Product p1 = new Product();
		p1.display();

		// Using parameterized constructor
		Product p2 = new Product(3, 10, "Laptop", 50000);
		p2.display();

		// User input product using setters
		System.out.println("\nEnter Product Details:");

		Product p3 = new Product(); // Use default constructor and override values

		System.out.print("Enter Product ID: ");
		int id = sc.nextInt();
		p3.setid(id);

		System.out.print("Enter Product Quantity: ");
		int quantity = sc.nextInt();
		p3.setquantity(quantity);

		sc.nextLine(); // consume newline

		System.out.print("Enter Product Name: ");
		String name = sc.nextLine();
		p3.setname(name);

		System.out.print("Enter Product Price: ");
		double price = sc.nextDouble();
		p3.setprice(price);

		System.out.println("\n--- Product Details---");
		p3.display();

		sc.close();
	}
}
