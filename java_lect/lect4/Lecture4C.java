//abstract class 
abstract class Vehicle{
	private int noOfPassengers;
	//can have one or more abstract and/or concrete functions
	public abstract void honk();
}

// an abstract class can inherit another abstract class
// in multi-level inheritance - the last child needs to implement any non-implemented abstract class
abstract class Car extends Vehicle{
	private int noOfTyres;
	public void drive()
	{
		System.out.println("Let's go on a drive");
	}
}


class Sedan extends Car{
	private int bootSize;
	public void honk() {
		System.out.println("Car Honking");
	}
}

public class Lecture4C {
	public static void main(String args[]) {
		Sedan s = new Sedan();
		s.honk();
		s.drive();
	}
}
