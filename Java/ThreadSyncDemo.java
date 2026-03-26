/**
 * Aim: 6. Thread synchronization acting on shared object (Bus Reservation).
 */
class ReservationSystem {
    int availableSeats = 1;
    synchronized void bookTicket(String name) {
        if (availableSeats >= 1) {
            System.out.println(name + " booked the seat successfully.");
            availableSeats--;
        } else {
            System.out.println(name + " failed: No seats available.");
        }
    }
}

class UserThread extends Thread {
    ReservationSystem rs;
    String name;
    UserThread(ReservationSystem rs, String name) { this.rs = rs; this.name = name; }
    public void run() { rs.bookTicket(name); }
}

public class ThreadSyncDemo {
    public static void main(String[] args) {
        ReservationSystem rs = new ReservationSystem();
        UserThread t1 = new UserThread(rs, "Naveen");
        UserThread t2 = new UserThread(rs, "Madhu");
        t1.start(); t2.start();
    }
}
