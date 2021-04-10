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
	public void turnLeft(int degrees){
		System.out.println("Vehicle turned left " + degrees + " %.");
	}
	public void turnRight(int degrees){
		System.out.println("Vehicle turned right " + degrees + " %.");
	}
}
public class Lecture4D{
	public static void main(String args[]) {
		Car honda = new Car();
		honda.honk();
		honda.turnLeft(12);
		honda.turnRight(15);
	}
}
