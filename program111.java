class Outer{
	class Inner1{
		class Inner2{
			void m3(){
				System.out.println("In m3");
			}
		}
		void m2(){
			Inner2 i2=new Inner2();
			i2.m3();
			System.out.println("In m2");
		}
	}
	void m1(){
		Inner1 i1=new Inner1();
		i1.m2();
		System.out.println("In m1");
	}
	public static void main(String[]args){
		Outer o=new Outer();
		o.m1();
	}
}
