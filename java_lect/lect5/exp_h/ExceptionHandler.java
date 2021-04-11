import java.io.*;

public class ExceptionHandler{
	public static void main(String [] args) throws FileNotFoundException, IOException{
		try{
			testException(-5);
			testException(-10);
		}
		catch (FileNotFoundException e){
			System.out.println("No files found");
		}
		catch (IOException e){
			System.out.println("IO error occurred");
		}
		finally{
			System.out.println("Releasing resources");
			testException(15);
		}
	} 
	public static void testException(int i) throws FileNotFoundException, IOException{
		if(i<0){
			FileNotFoundException myException = new FileNotFoundException();
			throw myException;
		}
		else if(i>10){
			throw new IOException();
		}
	}
}