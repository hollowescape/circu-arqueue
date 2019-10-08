import java.util.*;
public class comlextest{
	public static void main(String argu[]){
		Scanner o= new Scanner(System.in);
		int img1,img2,c,c2;
		System.out.println(" enter the real part and imaginary part of 1 complex number");
		img1=o.nextInt();
		c=o.nextInt();
		System.out.println(" enter the real part and imaginary part of 2 complex number");
		img2=o.nextInt();
		c2=o.nextInt();
		complex a1=new complex(img1,c);
		complex b1=new complex(img2,c2);
		complex c1=new complex();
		c1=c1.add(a1,b1);
		System.out.println(" the complex after adding the two is");
		c1.print();
	}
}