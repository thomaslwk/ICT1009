class MyBaseClass{
	public void disp() {
		System.out.println("Parent class method");
	}
}

class MyChildClass extends MyBaseClass{
	protected void disp() {
		System.out.println("Child class method");
	}
}
public class Inheritance3D {
	public static void main(String args[]) {
		MyChildClass obj = new MyChildClass();
	}
	
}
