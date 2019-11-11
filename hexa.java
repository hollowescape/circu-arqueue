package numberconversion;

public class hexa{
	public void hexa(int n)
	{
		System.out.println(" the number in hexadecimal form is ");
		System.out.println(Integer.toHexString(n));
	}
	public void decimal(String n)
	{
		System.out.println("the number in decimal form is ");
		System.out.println(Integer.parseInt(n,16));
	}
}