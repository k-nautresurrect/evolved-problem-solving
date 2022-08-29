import java.lang.*;
import java.io.PrintStream;
import java.util.Scanner;

public class Switch {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		PrintStream out = new PrintStream(System.out);

		int n = in.nextInt();

		switch (n*2) {
			case 2:
				out.println("this is 2nd executed");
				break;
			case 4:
				out.println("this is 4th executed");
				break;
			default:
				out.println("Default statement");
				break;
		}
	}
}