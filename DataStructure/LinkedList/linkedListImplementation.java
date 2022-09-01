import java.lang.*;

public class linkedListImplementation {
	public static void main(String[] args) {
		Node head = new Node();
		Node middle = new Node();
		head.data = 10;
		middle.data = 90;
		head.Next = middle;

		while(head != null){
			System.out.println(head.data);
			head = head.Next;
		}
	}
}

class Node {
	public int data;
	public Node Next;
}