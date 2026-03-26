package Database_JDBC;


public class JdbcWebDemo {
    public static void main(String[] args) {
        System.out.println("<html><head><link rel='stylesheet' href='../CSS_Styles.css'></head><body>");
        System.out.println("<h1>JDBC Database Access Results</h1>");
        try {

            System.out.println("<table border='1'><tr><th>ID</th><th>Name</th></tr>");
            System.out.println("<tr><td>001</td><td>John Doe</td></tr>");
            System.out.println("</table>");
        } catch (Exception e) {
            System.out.println("<p>Error: " + e.getMessage() + "</p>");
        }
        System.out.println("</body></html>");
    }
}
