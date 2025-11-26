class Date
{
	int day,mont,year;
	String dow;
	
	int getday()
	{
		return this.day;
	}
	
	int getmont()
	{
		return this.mont;
	}
	int getyear()
	{
		return this.year;
	}
	void setday(int d)
	{
		this.day=d;
	}
	void setdow(String str)
	{
		this.dow=str;
	}
	void setmont(int m1)
	{
		this.mont=m1;
	}
	void setyear(int y)
	{
		this.year=y;
	}
	void display()
	{
		System.out.println(this.day+"/"+this.mont+"/"+this.year);
	}
	

		

}//date class end here
class testdate
{
	public static void main(String args[]) //main class start
	{
		Date d1 =new Date();
		Date d2 =new Date();
		d1.setday(10);
		d1.setmont(9);
		d1.setyear(2025);
		d1.setdow("Wed");
		d1.display();


		
		



	}  //main end here
}//class test end here