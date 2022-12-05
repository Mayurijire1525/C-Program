class Outer{
	static class Inner{
		void m1(){
			System.out.println("In m1");
		}
	}
	public static void main(String[]args){
		Inner i=new Inner();
		i.m1();
	}
}
