interface datastructure{
	public void push(int n);
	public int pop();
	public boolean isempty();
	public boolean isFull();
}

class stack implements datastructure{
	int[] a=new int[10];
	int stacktop=-1;
	stack()
	{
		stacktop=-1;
	}
	public void push(int n)
	{
		if(stacktop==10)
		{
			System.out.println(" the stack is full");
		}
		else
		{
			a[++stacktop]=n;
		}
	}
	public int pop()
	{
		if(stacktop==-1)
		{
			System.out.println(" stack is empty");
			return -99;
		}
		else
		{
			return a[stacktop--];
		}
	}
	public boolean isempty()
	{
		if(stacktop==-1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	public boolean isFull()
	{
		if(stacktop==10)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
class queue implements datastructure{
	int[] a=new int[10];
	int rear=-1;
	int front=-1;
	queue()
	{
		rear=-1;
		front=-1;
			}
	public void push(int n)
	{
		if(rear==10)
		{
			System.out.println(" the queue is full");
		}
		else
		{
			a[++rear]=n;
		}
	}
	public int pop()
	{
		if(front==rear)
		{
			System.out.println(" queue is empty");
			return -99;
		}
		else
		{	System.out.println("hi");
			System.out.println(" "+front);
			return a[++front];
		}
	}
	public boolean isempty()
	{
		if(front==rear)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	public boolean isFull()
	{
		if(rear==10)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

}