class date
{
	int day,month,year;
	String dow;  //reference
}//class call end here
class test
{
	public static void main(String args[])//main start here
	{

		
		date d1;
		d1=new date();
		d1.day=3;
		d1.month=9;
		d1.year=2025;
		System.out.println(d1.day+"/"+d1.month+"/"+d1.year);
		System.out.println(d1.dow);
		//System.out.println(d1.year);

		
		date d2=new date();
		System.out.println(d2);


	}//main end here	
}//class end here
		