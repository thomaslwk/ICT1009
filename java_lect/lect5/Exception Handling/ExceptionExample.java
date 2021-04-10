import java.io.*;
public class ExceptionExample {

	//throws IOException
	public static void CheckedExType() {
		//throw new IOException();//RuntimeException();//unchecked
	}
	
	public static void main(String args[]) {
		String [] names = {"And","The","All"};
		System.out.println(names[2]);
		//throw new RuntimeException();
	}
}
