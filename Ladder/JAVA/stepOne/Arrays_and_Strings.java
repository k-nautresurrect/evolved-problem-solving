import java.util.Scanner;
import java.io.PrintStream;

public class Arrays_and_Strings {
	public static void main(String[] args) {
		PrintStream out = new PrintStream(System.out);
		// initialized with 0
		int[] arr = new int[10];
		// initialized with <0x00> which is equivalent to 0
		char[] charArr = new char[10];
		// use it only for storing constants
		String str = "immutableClass"; // immutable, having certain operations

		for(int pos = 0; pos < 10; pos++){
			out.print(arr[pos] + " ");
		}
		out.println();
		for(int pos = 0; pos < 10; pos++){
			out.print(charArr[pos] + " ");
		}
		out.println();
		for(int pos = 0; pos < str.length(); pos++){
			out.print(str.charAt(pos) + " ");
		}
		out.println();
	}
}