import java.util.*;
public class bv{
	public static void main(String arg[])
	{	int []a= new int[5];
		average m= new average();
		Scanner o=new Scanner(System.in);
		float g,g1,g2,ga;
		System.out.println(" enter the number of testscores(1-3)");
		int s=o.nextInt();
		switch(s)
		{
			case 1: m.gettest(a);
					g=m.av(a,5,s);
					System.out.println(" the average is "+g);
					break;
			case 2: m.gettest(a);
					g=m.av(a,5,s);
					m.gettest(a);
					g1=m.av(a,5,s);
					ga=(g+g1)/2;
					System.out.println(" the average is "+ga);
					break;
			case 3:	m.gettest(a);
					g=m.av(a,5,s);
					m.gettest(a);
					g1=m.av(a,5,s);
					m.gettest(a);
					g2=m.av(a,5,s);

					ga=(g+g1+g2)/3;
					System.out.println(" the average is "+ga);
					break;
			default: System.out.println(" wrong avalue entered");
						break;

			}
			
	

	}
}