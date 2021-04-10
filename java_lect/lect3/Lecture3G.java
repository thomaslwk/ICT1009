public class Lecture3G {

	public static void activity() {
		System.out.println("Stand");
	}
	
	public static void activity(String type) {
		if(type.equals("floor"))
			System.out.println("Squat");
		else if(type.equals("bowl"))
			System.out.println("Sit");
		else 
			System.out.println(type);
			System.out.println("HELP");
	}
	
	public static void activity(int num) {
		if(num == 1) activity();
		else if(num == 2) activity("@#$!!");
	}

	
	
	public static void main(String args[]) {
		char chromosome = 'a';
		int n = 2;
		String act = "bowl";
		
		switch(n) {
		case 'F':activity(act);
				break;
		case 'M':activity(n);
				break;
		default:activity(n);
				break;
		}
	}
}
