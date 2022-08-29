import java.util.Scanner;
import java.io.PrintStream;

public class ForLoop {
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		PrintStream out = new PrintStream(System.out);
		int n = 34;
		// updation can have complex expressions and multiple updation statement
		for(int input = 0; input < 1; input++){
			out.printf("the value of n : %d\n", n);
		}

		while(n%2 == 0){
			out.print(n*2 + " ");
			n--;
		}
	}
}