import java.awt.*;
public class Person {	
	//attributes
	String name;
	double height;
	double weight;
	int age;
	//methods declaration and implementation
	public void printTraits() {
		System.out.println("Name: "+name);
		System.out.println("Height: "+height);
		System.out.println("Weight: "+weight);
		System.out.println("Age: "+age);
	}	
	 
	public static void main(String args[]) {
		Person p = new Person();
		p.printTraits();
		/*Point pt = new Point(2,3);
		int xSquared = pt.x * pt.y;  // xSquared is 6
		System.out.println("p is at " + pt.getLocation());*/		
	}
}
