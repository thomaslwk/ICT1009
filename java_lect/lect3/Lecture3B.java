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
	Sedan(){
		System.out.println("Wheels: " + this.wheels);
	}
}

public class Lecture3B {
	public static void main(String args[]) {
		//creating object of child class
		Sedan sd = new Sedan();
		sd.wheels = 4;// grandparent variable
		sd.color = "red";// parent variable
		sd.brand = "Honda";// child variable
		Sedan sd2 = sd;
		sd2.wheels = 2;
		System.out.println(sd.wheels);
		System.out.println(sd2.wheels);
	}
}
