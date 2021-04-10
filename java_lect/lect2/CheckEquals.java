public class CheckEquals  {
	public static void main(String []args)
	{
		String personalLoan = new String("ICT 1009 ");
		String homeLoan = new String("ICT 1009 ");

		//since two strings are different object result should be false
		boolean result = personalLoan == homeLoan;
		System.out.println("Comparing two strings with == operator: " + result);
		     
		//since strings contains same content , equals() should return true
		result = personalLoan.equals(homeLoan);
		System.out.println("Comparing two Strings with same content using equals method: " + result);
		     
		homeLoan = personalLoan;
		//since both homeLoan and personalLoand reference variable are pointing to same object
		//"==" should return true
		result = (personalLoan == homeLoan);
		System.out.println("Comparing two reference pointing to same String with == operator: " + result);

		
	}
}