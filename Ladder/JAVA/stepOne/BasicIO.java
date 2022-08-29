import java.util.Scanner;
import java.io.PrintStream;

public class BasicIO{
	public static void main(String[] args) {
		Scanner inStream = new Scanner(System.in);
		PrintStream outStream = new PrintStream(System.out);
		int n = inStream.nextInt();
		inStream.nextLine();
		String str = inStream.nextLine();
		outStream.println(n);
		outStream.println(str);
	}
}