//abstract class 
abstract class Vehicle{
	private int noOfPassengers;
	//can have one or more abstract and/or concrete functions
	public abstract void honk();
}

interface Steerable{
	public void turnLeft(int degrees);
	public void turnRight(int degrees);
}

class Car extends Vehicle implements Steerable{
	public void honk() {
		System.out.println("Car Honking");
	}
	
	public void turnLeft(int degrees) {
		
	}
	public void turnRight(int degrees) {
		
	}
}

public class InterfaceExampleA {

}
