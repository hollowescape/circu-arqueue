import java.util.*;
public class stdtest{
	public static void main(String ar[])
	{	Scanner o=new Scanner(System.in);
		studgrade s=new studgrade(12,"mayank",88,0); 
		String l;
		char ch;
		System.out.println(" enter the testscore of student");
		int c=o.nextInt();
		System.out.println(" enter the name of student");
		l=o.next();
		studgrade s1=new studgrade(13,l,c);
		ch=s.cal();
		System.out.println(" the grade of student is" +ch);
		ch=s1.cal();
		System.out.println(" the grade of student is" +ch);
	}
}