
public class ThisDemo {
	
	int a;
	double b;
	String test;
	
	public void setValue(int a,double b) {
		this.a = a;
		this.b = b;
	}
	
	public static void main(String args[]) {
		ThisDemo td = new ThisDemo();
		td.setValue(5, 6.0);
	}

}
