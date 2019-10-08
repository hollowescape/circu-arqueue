import java.util.*;
public class area{
	public static void main(String argu[]){
	       int l=0;
	       int b=0;
	        float h=0;
		 float ar=0;
		Scanner o= new Scanner(System.in);
		testar t=new testar();
		System.out.println(" enter the length of square");
		l=o.nextInt();
		t.cal(l);
		System.out.println(" enter the length and breadth of reactangle");
		l=o.nextInt();
		b=o.nextInt();
		t.cal(l,b);
		System.out.println(" enter the base and height of triangle");
		b=o.nextInt();
		h=o.nextFloat();
		t.cal(b,h);
	}
}


