package quadratic;
import java.lang.Math; 
public class root{

	public float d;
	public float re,comp;
	public void eual(int a,int b)
	{
		System.out.println(" the first root of euation is"+(-b/(2*a))+"\nand other root of euation is "+(b/(2*a)));
	}
	public void real(int a,int b,int c)
	{
		d=(float)Math.sqrt(b*b-4*a*c);
		System.out.println(" the first root of equation is "+((-b+d)/(2*a)));
		System.out.println(" the second root of the equation is "+((-b-d)/(2*a)));
	}
	public void comp(int a,int b,int c)
	{
		d=(float)Math.sqrt(-(b*b-4*a*c));
		re = (-b/(2*a));
		comp=(d/(2*a));
		System.out.println(" the root is "+re+ "+i"+comp);
		System.out.println(" the root is "+re+"-i"+comp);
	}
}