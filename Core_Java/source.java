class date
{
	int day,mont,year;
	String dow;
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
}//date class end here
class test
{
	public static void main(String args[]) //main class start
	{
		date d1 =new date();
		d1.setday(10);
		d1.setmont(9);
		d1.setyear(2025);

		d1.setdow("Wed");
		
		

		System.out.println(d1.day);
		System.out.println(d1.mont);
		System.out.println(d1.year);
		System.out.println(d1.dow);
		

	}  //main end here
}//class test end here