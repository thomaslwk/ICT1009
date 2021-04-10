class Vehicle{
	int wheels;
}

class Car extends Vehicle{
	String color;
}

class Truck extends Vehicle{
	
}

class Sedan extends Car{
	String brand;
}

public class Inheritance3B {
	public static void main(String args[]) {
		//creating object of child class
		Sedan sd = new Sedan();
		sd.wheels = 4;// grandparent variable
		sd.color = "red";// parent variable
		sd.brand = "Honda";// child variable
	}
}
