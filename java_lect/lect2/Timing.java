class Timer{
	int hour = 1;
	int minute = 1;
	
	//constructor
	
	Timer(int h,int m)
	{
		hour = h;
		minute = m;
	}
	public void showMe() {
		System.out.println("Show me");		
	}
	public void instMethod(Timer tObj) {
		System.out.println("Class start time is:"+this.hour+":"+this.minute);
		System.out.println("Class end time is:"+tObj.hour+":"+tObj.minute);
		this.showMe();
	}
	
}
public class Timing {
	public static void main(String args[]) {
		Timer intoClass = new Timer(9,10);
		Timer outClass = new Timer(11,50);
		intoClass.instMethod(outClass);
		outClass.instMethod(intoClass);
	}
}
