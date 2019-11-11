
import java.util.*;
import numberconversion.number;
import numberconversion.octal;
import numberconversion.hexa;
public class test1{
	public static void main(String argu[])
	{
		Scanner o=new Scanner(System.in);
		number n=new number();
		octal oc=new octal();
		hexa h=new hexa();
		System.out.println(" enter the number in decimal\n");
		int d=o.nextInt();
		n.bin(d);
		oc.octal(d);
		h.hexa(d);
		System.out.println(" enter the number in binary");
		String s=o.next();
		n.decimal(s);
		System.out.println(" enter the number in octal");
		 s=o.next();
		oc.decimal(s);
		System.out.println(" enter the number in hexadecimal");
		s=o.next();
		h.decimal(s);
	}
}