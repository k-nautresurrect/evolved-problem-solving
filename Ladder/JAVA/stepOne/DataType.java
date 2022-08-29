import java.lang.*;
import java.io.PrintStream;

public class DataType{
	public static void main(String[] args) {
		PrintStream out = new PrintStream(System.out);

		out.println(Integer.BYTES);
		out.println(Character.BYTES);
		out.println(Boolean.TRUE);
		out.println(Float.BYTES);
		out.println(Double.BYTES);
	}
}