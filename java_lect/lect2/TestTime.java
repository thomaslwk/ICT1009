class Time{
	int hour = 1;
	int minute = 1;
	int sec = 1;
	
	// what is we change the access modifier to private or protected or public?
	public void display() {
		System.out.println("Current time is "+hour+":"+minute+":"+sec);
	}
}
public class TestTime {
	public static void main(String args[]) {
		Time newTime = new Time();
		System.out.println(newTime.hour);
		System.out.println(newTime.minute);		
		System.out.println(newTime.sec);
		newTime.display();
	}
}
