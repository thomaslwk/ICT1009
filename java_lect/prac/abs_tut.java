abstract class Dog{
	public void bark(){
		System.out.println("Bark!");
	}
	public void poop(){
		System.out.println("Take shit");
	};
}
class Chihuahua extends Dog{
	
}

public class abs_tut{
	public static void main(String [] args){
		Chihuahua dog = new Chihuahua();
		dog.bark();
		dog.poop();
	}
}