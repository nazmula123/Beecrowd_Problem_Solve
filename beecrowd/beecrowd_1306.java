import java.util.Scanner;

public class beecrowd_1306 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int c = 1;
        while (true) {
            double a, b;
            a = sc.nextDouble();
            b = sc.nextDouble();

            if (a == 0 && b == 0) {
                break;
            } else {
                int res = (int) Math.ceil(a / b);
                if (res - 1 > 26) {
                    System.out.printf("Case %d: impossible\n", c);
                } else {
                    System.out.printf("Case %d: %d\n", c, res - 1);
                }
            }
            c++;
        }
    }

    private static int ceil(double d) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'ceil'");
    }
}