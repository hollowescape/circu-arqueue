class studgrade{
	private int usn;
	private String name;
	private float testsc;
	private int points;

	studgrade(int u,String n,float t)
	{
		usn=u;
		name=n;
		testsc=t;
		points=100;
	}
	studgrade(int u,String n,float t,int p)
	{
		usn=u;
		name=n;
		testsc=t;
		if(p==0)
		{
			points=1;
		}
		else{
			points=p;
		}

	}
	char cal()
	{
		float sum,perc;
		sum=testsc;
		perc=(sum*100)/points;
		if(perc>90)
		{
			return 'A';
		}
		else if(perc>80)
		{
			return 'B';
		}
		else if(perc>70)
		{
			return 'C';
		}
		else if(perc>60)
		{
			return 'D';
		}
		return 'F';
	}
}


