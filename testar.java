public class testar{
		private int l=0;
	      private int b=0;
	       private float h=0;
		private float ar=0;

		public void cal(int l){
			ar=l*l;
			System.out.println(" the area of square is "+ar);
		}
		public void cal(int l,int b){
			ar=l*b;
			System.out.println(" the area of rectangle is "+ar);
		}
		public void cal(int l,float h){
			ar=(float)(0.5*l*h);
			System.out.println(" the area of triangle is "+ar);
		
}
}