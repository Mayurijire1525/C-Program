class Outer{
	int x=10;
	static int y=20;

	void m1(){
		class Inner1{
			void m2(){
				System.out.println("In m2");
			}
		}
		Inner1 i1=new Inner1();
		i1.m2();
	}
	public static void main(String[]args){
		Outer o=new Outer();
		o.m1();
	}
}
