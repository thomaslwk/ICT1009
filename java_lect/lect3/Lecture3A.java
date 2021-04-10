// base or parent class or super class
class Cycle{
	
	//what if the variables are private? (// we can either make them public or create a public function to access and get their values)
	protected int weight;
	
	public void setWeight(int wgt) {
		weight = wgt;
	}
	public void print() {
		System.out.println("Weight is:"+ weight);
	}
}

// base or child or subclass
// PlainBicycle inherits all public attributes and methods 
//from base class and can add its own variables and methods too
// like it inherits variable "weight" and adds "brand" and "name"
class PlainBicycle extends Cycle{
	String name;
	String brand;
	
	public void setDetails(String nm,String bd) {
		name = nm;
		brand = bd;
	}	
	public void display() {
		System.out.println("Name is:"+ name);
		System.out.println("Brand is:"+ brand);
	}
	
}
public class Inheritance3A {
	public static void main(String args[]) {
		//creating object of base class
		PlainBicycle plain = new PlainBicycle();
		plain.setWeight(5);// calling parent class function
		plain.setDetails("Goofy","Atlas");// calling child class function
		plain.print();// calling parent class function
		plain.display(); //calling child class function
	}
}


