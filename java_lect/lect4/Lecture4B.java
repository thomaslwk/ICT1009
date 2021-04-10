//abstract class
// abstract class can have zero or more abstract functions
// if any class has an abstract function it should be declared as abstract
abstract class Student{
	private String name;
	private String courseCode;
	void setName(String sname) {name = sname;}
	public void sayHello(){System.out.println("Hello");}
	abstract void marticulate(String sname,String code) 	;
}

//subclass that inherits abstract class: it MUST implement all the abstract functions
// it can re-implement the non abstract functions too, but that is optional
class EnrollProg extends Student{
	
	//implementation of the abstract method
	void marticulate(String sname,String code)
	{
		switch(code)
		{
		case "ICT1009":
			System.out.println(sname+" In course");
			break;
		case "ICT1002":
			System.out.println(sname+" previous trimester");
			break;
		}
	}
}

public class Lecture4B {
	public static void main(String[] args) {
	      //Student sobj = new Student();
	      EnrollProg epobj = new EnrollProg();// creating subclass object
	      epobj.marticulate("Title", "ICT1009");// function call in child class	      
	    }

}
