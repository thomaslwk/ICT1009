/* 
an interface can have zero attributes or variables
it can only have public, static and final variables
it can only have public methods and all the methods are without a body 
i.e abstract methods can include exception specifications
import java.io.*;
public void setRadius(double radius) throws IOException
they cannot be instantiated Circle newCircle = new Circles();  
*/
interface Circle{
	public double radius = 2.0;
	public double getRadius();
	public void setRadius(double rad);
	public double getArea();	
}
class TestCircle implements Circle{
	public double getRadius() {
		return radius;
	}
	// it is like a constant so cannot change the value
	public void setRadius(double rad) {
		// radius = rad;
	}
	public double getArea() {
		return Math.PI * radius*radius;
	}
}

public class Lecture4E {
	public static void main(String args[]) {
		TestCircle tc = new TestCircle();
		System.out.println("Area of the circle = "+tc.getArea());
	}
}
