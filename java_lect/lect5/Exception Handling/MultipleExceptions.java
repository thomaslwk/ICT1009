import java.io.IOException;
/*doAnything();
 * 
		}catch(IOException  e){
			System.out.println("Caught " +e);
		}
		}catch( ArrayIndexOutOfBoundsException e){
			System.out.println("Caught " +e);
		}
 * */ 
 
public class MultipleExceptions {
	public static void doAnything () throws IOException, ArrayIndexOutOfBoundsException
	{
		boolean flag1 = false;
		boolean flag2 = true;
		if (flag1) throw new IOException();
		if (flag2) throw new ArrayIndexOutOfBoundsException(); 
	}
	public static void doSomething () throws IOException, InterruptedException
	{
		boolean flag1 = false;
		boolean flag2 = true;
		if (flag1) throw new IOException();
		if (flag2) throw new InterruptedException(); 
	}
	public static void main(String [] args) {
		
		try
		{
			doSomething();
		}catch(IOException | InterruptedException e){
			System.out.println("Exception thrown " +e);
		}
		finally {
			System.out.println("In finally");
		}
	}
}
