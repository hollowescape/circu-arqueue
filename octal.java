package numberconversion;

public class octal{
	public void octal(int n)
	{
		System.out.println(" the number in octal form is ");
		System.out.println(Integer.toOctalString(n));
	}
	 public void decimal(String n)
	{
		System.out.println("the number in decimal form is ");
		System.out.println(Integer.parseInt(n,8));
	}
}
