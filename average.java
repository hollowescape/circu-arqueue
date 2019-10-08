import java.util.*;
class average{

	int sum=0;
	float avg;
	Scanner o=new Scanner(System.in);
	average()
	{

	}
	void gettest(int a[])
			{	
				System.out.println("enter the testdetails");
				for(int i=0;i<5;i++)
				{
					System.out.println(" enter the testscore marks"+(i+1));
	                         a[i]=o.nextInt();  			

				}
			
			}
	float av(int a[],int n,int num)
	{	sum=0;
		for(int h=0;h<n;h++)
		{
			sum=sum+a[h];
		}
		avg=(float)sum/n;
	return avg;
	}
}