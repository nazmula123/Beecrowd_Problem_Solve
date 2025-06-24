import java.util.Scanner;

public class beecrowd_1257 {
    public static void main(String[] args) {

        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int x;
            x = sc.nextInt();
            int line_counter = 0, sum = 0;
            for (int j = 0; j < x; j++) {
                String str;
                str = sc.next();
                sum += counter(str, line_counter);
                line_counter++;
            }
            System.out.printf("%d\n", sum);

        }
    }

    public static int counter(String str, int c) {
        int s = 0;
        for (int i = 0; i < str.length(); i++) {
            s += (str.charAt(i) - 65) + i + c;
        }
        return s;
    }
}
