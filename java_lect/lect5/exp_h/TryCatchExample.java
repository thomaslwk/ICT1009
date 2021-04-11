//}catch(RuntimeException e) {
public class TryCatchExample {

	public static void main(String args[]) {
		int [] a = new int[2];
		try
		{
			System.out.println("Accesing third element"+a[2]);
			System.out.println("After exception");
		}catch(ArrayIndexOutOfBoundsException e) {//}catch(RuntimeException e){IllegalArgumentException
			System.out.println("Exception thrown " +e);
		}
		/*finally {
			System.out.println("In finally");
		}
		System.out.println("After finally!");*/
		System.out.println("After catch!");
	
	}
}
