import quadratic.root;
import java.util.*;
import java.lang.Math;
public class test2{
	public static void main(String argu[])
	{
		Scanner o=new Scanner(System.in);
		int a,b,c;
		float d;
		root r=new root();
		System.out.println(" enter the roots of equations");
		a=o.nextInt();
		b=o.nextInt();
		c=o.nextInt();
		d=(b*b-4*a*c);
		if(d<0)
		{
			r.comp(a,b,c);
		}
		else if(d==0)
		{
			r.eual(a,b);
		}
		else
		{
			r.real(a,b,c);
		}
	}
}