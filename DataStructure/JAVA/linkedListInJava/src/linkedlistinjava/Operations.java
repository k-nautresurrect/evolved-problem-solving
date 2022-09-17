package linkedlistinjava;

import edu.princeton.cs.algs4.*;

public class Operations {
    public static void traverse(Node head){
        while(head != null){
            StdOut.print("[" + head.data + "]" + "->");
            head = head.next;
        }
        StdOut.println();
    }
    
    public static Node insertNodeFront(Node head, int data){
        Node insert = new Node(data);
        insert.next = head;
        return insert;
    }
    
    public static void insertAtLast(Node head, int data){
        Node insert = new Node(data);
        Node temp = head;
        while(temp.next != null){
            temp = temp.next;
        }
        temp.next = insert;
    }
    
    public static void printReverseOrder(Node head){
        if(head == null){
            return;
        }
        printReverseOrder(head.next);
        StdOut.print("[" + head.data + "]" + "<-");
    }
    
    public static void removeElement(Node head, int data){
        Node temp = head;
        while(head.next != null){
            if(head.next.data == data){
                temp = head.next;
                head.next = head.next.next;
                break;
            }
            head = head.next;
        }
    }
    
    public static Boolean detectCycle(Node head){
        Node slow = head;
        Node fast = head;
        while(slow != null && fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
            if(slow.equals(fast)) return true;
        }
        return false;
    }
    
    public static Node reverseList(Node head) {
        Node current = head;
        Node prev = null;
        Node after;
        while(current != null){
            after = current.next;
            current.next = prev;
            prev = current;
            current = after;
        }
        return prev;
    }
}
