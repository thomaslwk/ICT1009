// base class or parent class
class Employee{
	private String name;
	public int age;
	
	//default constructor
	Employee()
	{
		name = "dog";
		age = 100;
	}
	
	// parameterized constructor
	Employee(String a, int b)
	{
		name = a;
		age = b;
	}
	
	public void sayHello()
	{
		System.out.println("Hello Employees");
	}	
}


// child or subclass
class SalariedEmployee extends Employee{
	int salary;
	// constructor of child class
	public SalariedEmployee(String a,int b, int c)
	{
		//super(a,b);
		salary = c;
		//super.name = a;
		//super.age = b;
	}
	
	public void sayHi()
	{
		//super.sayHello();
		System.out.println("Hello Employees child");
	}
}


public class Inheritance3C {
	public static void main(String args[])
	{
		//Employee emp = new Employee();// parent class object 
		SalariedEmployee semp = new SalariedEmployee("Jack",24,1000);// child class object
		//System.out.println(emp.name+" "+emp.age);
		//System.out.println(semp.name+" "+semp.age +" "+semp.salary);
		semp.sayHello();// parent class function
		semp.sayHi();// child class function
	}


}
