//abstract class 
// if we remove abstract from the class declaration then what? 
abstract class Vehicle{
	private int noOfPassengers;
	//can have one or more abstract and/or concrete functions
	public abstract void honk();
}

class Car extends Vehicle{
	// error: if we do not implement the abstract function
	// What if we change the signature of the inherited method?
	public void honk() {
		System.out.println("Car Honking");
	}
}


public class Lecture4A {

}
