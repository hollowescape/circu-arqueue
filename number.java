package numberconversion;

public class number{
	public void bin(int n)
	{
		System.out.println(" the number in binary form is ");
		System.out.println(Integer.toBinaryString(n));
	}
	public void decimal(String n)
	{
		System.out.println("the number in decimal form is ");
		System.out.println(Integer.parseInt(n,2));
	}
}
