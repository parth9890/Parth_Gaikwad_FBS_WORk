class Date
{
 	int day,month,year;
 	String dow;

    	void setday(int d)
	{  
		this.day=d;

	}

	void setmonth(int s)
	{
		this.month=s;	
	}
	void setyear(int a)
	{
 		this.year=a; 
	}

	void setdow(String str)
	{	
		this.dow=str;
	}
}



class Test
{

  	public static void main(String [] args)
	{
	
 	Date d1 =new Date();
 	d1.setday(10);
 	d1.setmonth(9);
 	d1.setyear(2025);

	d1.setdow("wed");


	System.out.println(d1.day + "/" + d1.month + "/" + d1.year);
	//System.out.println(d1.month);
	//System.out.println(d1.year);
	System.out.println(d1.dow);

	
	//Date d2=new Date();
	//System.out.println(d2);



	}





}