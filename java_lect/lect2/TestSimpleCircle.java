class SimpleCircle{
	double radius;
	private double rad;
	public double rr;
	double getArea()
	{
		return Math.PI * radius * radius;
	}
	
	double getPerimeter()
	{
		return 2 * radius * Math.PI;
	}
	
	void setRadius(double newRadius)
	{
		radius = newRadius;
	}
}
public class TestSimpleCircle {
    /** Main Method */
	public static void main(String args[]) {
	
		//without any constructor
		SimpleCircle circle = new SimpleCircle();
		System.out.println("The area of the circle of radius " + circle.radius + " is " + circle.getArea());
		
		
		//modify circle radius
		circle.setRadius(10);
		System.out.println("The area of the circle of radius " + circle.radius + " is " + circle.getArea());
		
		// 1. what if we have a default constructor
		
		// 2. what if we have a parameterized constructor
	}
}
