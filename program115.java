class Outer{
	int x=10;
	static int y=20;

	static class Inner{
		void m1(){
		//	System.out.println(x);
			System.out.println(y);
		}
	}
	public static void main(String[]args){
		Inner i=new Inner();
		i.m1();
	}
}
