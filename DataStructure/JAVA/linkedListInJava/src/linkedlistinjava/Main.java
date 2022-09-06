package linkedlistinjava;

import edu.princeton.cs.algs4.*;

public class Main {
    public static void main(String[] args) {
        Node head =  new Node();
        Node prev = new Node();
        head.data = 10;
        prev.data = 87;
        head.next = prev;
        
        for(int nodes = 0; nodes < 5; nodes++){
            int data = 10*nodes;
            Node insert = new Node(data);
            prev.next = insert;
            insert.next = null;
            prev = prev.next;
        }
        head = Node.insertNodeFront(head, 78);
        Node.insertAtLast(head, 69);
        Node.traverse(head);
        Node.printReverseOrder(head);
        Node.removeElement(head, 10);
        StdOut.println();
        Node.traverse(head);
    }
}

