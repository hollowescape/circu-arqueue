import java.util.*;
public class test3{
	public static void main(String argu[])
	{	int e=1;
		boolean ca;
		int nu,r,c;
		stack s=new stack();
		queue q=new queue();
		Scanner o=new Scanner(System.in);
		while(e==1){
		System.out.println(" enter the choice 1. stack\n 2.queue \n3.exit");
		int n=o.nextInt();
		if(n==1)
		{	while(e==1)
			{
			System.out.println(" enter the choice");
			System.out.println(" 1.push \n 2. pop\n 3.isempty\n 4.isfull\n 5.exit");
			 c=o.nextInt();
			switch(c)
			{
				case 1: System.out.println(" enter the element to be pushed");
						 nu=o.nextInt();
						s.push(nu);
						break;
				case 2:  r=s.pop();
						System.out.println(" the element poped is "+r);
						break;
				case 3:  ca=s.isempty();
						if(ca)
						{
							System.out.println(" the stack is empty");
						}
						else
						{
							System.out.println(" the stack is not empty");
						}
						break;
				case 4: ca=s.isFull();
						if(ca)
						{
							System.out.println(" the stack is full");
						}
						else
						{
							System.out.println(" the stack is not full");
						}
						break;
				case 5: e=0;
						break;
				}
			}

		}
		else if(n==2)
		{
				while(e==1)
			{
			System.out.println(" enter the choice");
			System.out.println(" 1.push \n 2. pop\n 3.isempty\n 4.isfull\n 5.exit");
			 c=o.nextInt();
			switch(c)
			{
				case 1: System.out.println(" enter the element to be pushed");
						 nu=o.nextInt();
						s.push(nu);
						break;
				case 2:  r=s.pop();
						System.out.println(" the element poped is "+r);
						break;
				case 3:  ca=s.isempty();
						if(ca)
						{
							System.out.println(" the queue is empty");
						}
						else
						{
							System.out.println(" the queue is not empty");
						}
						break;
				case 4: ca=s.isFull();
						if(ca)
						{
							System.out.println(" the queue is full");
						}
						else
						{
							System.out.println(" the queue is not full");
						}
						break;
				case 5: e=0;
						break;
				}
			}

		}
		else
		{
			e=0;
		}
	}
	}
}