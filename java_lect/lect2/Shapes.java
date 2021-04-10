
public class Shapes {

	private int length,breadth, radius;
	public Shapes(int r) {
		radius = r;
	}
	public Shapes(int l,int b) {
		length = l;
		breadth = b;
	}
	public static void main(String args[]) {
		Shapes circle = new Shapes(6);
		Shapes rectctangle = new Shapes(10,5);
		
		//what if you want to initialize a square?
	}
}
