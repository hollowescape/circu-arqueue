import java.util.*;
public class arthtest{
	public static void main(String argu[])
	{	 int a;
		 int b;
		 int d;

		arth oa= new arth();
		Scanner o=new Scanner(System.in);
		System.out.println(" enter the choice ");
		System.out.println(" 1.add \n 2. sub\n 3. mul\n 4.div\n");
		int c=o.nextInt();
		switch(c)
		{
			case 1: System.out.println(" enter the two numbers");
					a=o.nextInt();
					b=o.nextInt();
					d=oa.add(a,b);
					System.out.println(" the addition is "+d);
					break;

			case 2: System.out.println(" enter the two numbers");
					a=o.nextInt();
					b=o.nextInt();
					d=oa.sub(a,b);
					System.out.println(" the subtraction is "+d);
					break;
			case 3: System.out.println(" enter the two numbers");
					a=o.nextInt();
					b=o.nextInt();
					d=oa.mul(a,b);
					System.out.println(" the multiplication is "+d);
					break;

			case 4: System.out.println(" enter the two numbers");
					a=o.nextInt();
					b=o.nextInt();
					d=oa.div(a,b);
					System.out.println(" the divison is "+d);
					break;
			default: System.out.println(" wrong value entered");
					break;
			

		}

	}
}