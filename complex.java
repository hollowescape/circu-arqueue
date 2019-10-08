class complex{
	 int real;
	int comp;
	complex()
	{
		real=1;
		comp=1;
	}
	complex( int real,int comp)
	{
		this.real=real;
		this.comp=comp;
	}
	public  static complex add(complex a,complex b)
	{	complex t=new complex();
		t.real=a.real+b.real;
		t.comp=a.comp+b.comp;
		return t;
			
	}
	public void print()
	{
		System.out.println(" the comlex number  is "+real+" + i"+comp);
	}

}