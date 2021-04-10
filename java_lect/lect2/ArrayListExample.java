import java.io.*;
import java.util.*;

public class ArrayListExample {
	public static void main(String args[]) throws IOException{
		BufferedReader userInput = new BufferedReader (new InputStreamReader (System.in));
		java.util.ArrayList <String> myArr = new java.util.ArrayList <String>();
		myArr.add("Italian Riviera");
		myArr.add("Jersey Shore");
		myArr.add("Puerto Rico");
		myArr.add("Coney Island");
		myArr.add("Walt Disney World Resort");
		myArr.add("Barbados");
		myArr.remove("Puerto Rico");
		System.out.println("Vacation Advisor");
		System.out.println("Enter your name:");
		String name = userInput.readLine();
		int nameLength = name.length();
		if(nameLength == 0) {
			System.out.println("Empty name entered");
			return;
		}
		int vacationIndex = nameLength% myArr.size();
		System.out.println("We suggest you to go to "+ myArr.get(vacationIndex));
	}
}
