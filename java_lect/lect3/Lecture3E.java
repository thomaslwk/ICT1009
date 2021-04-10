import java.util.ArrayList;
// base class
// what if due1 was static? or other due1 becomes static?
class Human{
	public void due1()
	{
		System.out.println("Lets due1!");		
	}
}

//child class overriding parent's functions
//Parent class methods that are static are not part of a child class 
/**************************************************************************
	(although they are accessible), so there is no question of overriding it. 
	Even if you add another static method in a subclass, identical to the 
	one in its parent class, this subclass static method is unique and 
	distinct from the static method in its parent class.
****************************************************************************/ 
class Hacker extends Human{
	public void due1(){
		System.out.println("You are hacked!");		
	}
}
class Gamer extends Human{
	public void due1(){
		System.out.println("You are pwned!");		
	}
}

public class Lecture3E {
	public static void main(String args[]){
		ArrayList<Human> people = new ArrayList<Human>();
		people.add(new Gamer());
		people.add(new Hacker());
		people.add(new Gamer());
		for(Human person :people){
			person.due1();
		}
	}
}
