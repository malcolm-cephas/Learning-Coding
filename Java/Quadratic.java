public class Quadratic {
    public static void main(String args[]) {
        if (args.length < 3) {
            System.out.println("Usage: java Quadratic <a> <b> <c>");
            return;
        }
        int a, b, c, d;
        double r1, r2;
        a = Integer.parseInt(args[0]);
        b = Integer.parseInt(args[1]);
        c = Integer.parseInt(args[2]);
        d = b * b - 4 * a * c;
        
        if (d == 0) {
            r1 = r2 = - (double) b / (2 * a);
            System.out.println("The roots are real and equal: r1 = " + r1 + " and r2 = " + r2);
        } else if (d > 0) {
            double t = Math.sqrt(d);
            r1 = (-b + t) / (2 * a);
            r2 = (-b - t) / (2 * a);
            System.out.println("The roots are real and distinct: r1 = " + r1 + " and r2 = " + r2);
        } else {
            System.out.println("The roots are imaginary; no real solution.");
        }
    }
}
