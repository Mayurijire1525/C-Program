class Outer{
	int x=10;
	static int y=20;

	void m1(){
		int z=30;
		class Inner{
			void m2(){

			System.out.println(x);
			System.out.println(y);
			System.out.println(z);
		}
	}
	System.out.println("In m1");
	Inner i=new Inner();
	i.m2();
	}
	public static void main(String[]args){
		Outer o=new Outer();
		o.m1();
	}

}

