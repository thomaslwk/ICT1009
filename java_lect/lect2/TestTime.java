class Time{
	// int hour = 1;
	// int minute = 1;
	// int sec = 1;

	private int hour = 1;
	private int minute = 2;
	private int sec = 3;
	public int getHour(){return hour;}
	public int getMinute(){return minute;}
	public int getSec(){return sec;}
	// what is we change the access modifier to private or protected or public?
	public void display() {
		// System.out.println("Current time is "+hour+":"+minute+":"+sec);
		System.out.println("Current time is "+getHour()+":"+getMinute()+":"+getSec());
	}
}
public class TestTime {
	public static void main(String args[]) {
		Time newTime = new Time();
		// System.out.println(newTime.hour);
		// System.out.println(newTime.minute);		
		// System.out.println(newTime.sec);
		System.out.println(newTime.getHour());
		System.out.println(newTime.getMinute());		
		System.out.println(newTime.getSec());
		newTime.display();
	}
}
