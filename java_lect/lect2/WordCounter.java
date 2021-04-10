import java.io.*;
import java.util.*;
public class WordCounter {
	public static int counter(LinkedList <String> inList) {
		int count = 0;
		while(!inList.isEmpty()) {
			count++;
			inList.remove();
		}
		return count;
	}
	public static void main(String args[]) {
		String inWord;
		LinkedList <String> wordList = new LinkedList<String>();
		Scanner userIn = new Scanner(System.in);
		do {
			System.out.print("Enter a word or just \".\" to end: ");
			inWord = userIn.next();
			if(!inWord.equals("."))
				wordList.add(inWord);
		}while(!inWord.equals("."));
		userIn.close();
		System.out.println("Number of words entered = "+counter(wordList));
	}
}
