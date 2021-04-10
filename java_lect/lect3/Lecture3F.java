// base class
class Person{
	String name;
	int weight;
	String address;
	//Test default constructor 
	public Person(){
		System.out.println("I am person");
	}
	public void hello()
	{
		System.out.println("I am person");
	}
}

// inherited class
class Student extends Person{
	String rollNo;
	public int marks;
	public void hello()
	{
		System.out.println("I am student");
	}
	
}

/*Type assignment example
every student is a person but every person is not a student
 can we do other way round?
 Student s = new Person()
A variable of a supertype can refer to a subtype object 
*/
public class Lecture3F {
	public static void main(String args[])
	{
		Person a = new Student();	
		a.hello();
	}
}
