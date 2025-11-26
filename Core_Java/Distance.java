class Distance{

	int feet;
	double inches;
	
	void setfeet(int a){
		this.feet=a;
	}
	void setinches(double b){
		this.inches=b;
	}
	int getfeet(){
		return this.feet;
	}
	double getinches(){
		return this.inches;
	}
	void display()
	{
	
	System.out.println("FEETS=" + this.feet);
	System.out.println("INCHES=" + this.inches);
	


	}




}

class main{


	public static void main(String[]args)
	{
		Distance d1=new Distance();
		d1.setfeet(39);
		d1.setinches(42.9);
		d1.display();
	
	
	}





}