import java.awt.*;
public class Shapes {
	private int length,breadth, radius;
	public Shapes(int r) {
		radius = r;
		System.out.println(3*(r*r)); //classic 
	}
	public Shapes(int l,int b) {
		length = l;
		breadth = b;
		System.out.println(l*b);
	}
	// For square, where s for side
	public Shapes(double s){
		length = (int) s;
		breadth = (int) s;
		System.out.println(s*s);
	}
	public static void main(String args[]) {
		Shapes circle = new Shapes(6);
		Shapes rectctangle = new Shapes(10,5);
		//what if you want to initialize a square?
		Shapes square = new Shapes(8.0);
	}
}
