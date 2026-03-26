/**
 * Aim: 6. Doubly linked list with deletion.
 */
class Node {
    int data;
    Node prev, next;
    Node(int data) { this.data = data; }
}

public class DoublyLinkedList {
    Node head;

    public void insert(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        Node temp = head;
        while (temp.next != null) temp = temp.next;
        temp.next = newNode;
        newNode.prev = temp;
    }

    public void delete(int key) {
        if (head == null) return;
        Node temp = head;
        while (temp != null && temp.data != key) temp = temp.next;
        if (temp == null) return;
        if (temp == head) head = temp.next;
        if (temp.next != null) temp.next.prev = temp.prev;
        if (temp.prev != null) temp.prev.next = temp.next;
        System.out.println("Deleted: " + key);
    }

    public void display() {
        Node temp = head;
        System.out.print("List: ");
        while (temp != null) {
            System.out.print(temp.data + " <-> ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public static void main(String[] args) {
        DoublyLinkedList list = new DoublyLinkedList();
        list.insert(10); list.insert(20); list.insert(30);
        list.display();
        list.delete(20);
        list.display();
    }
}
