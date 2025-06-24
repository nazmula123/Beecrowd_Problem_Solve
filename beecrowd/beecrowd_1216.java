import java.util.Scanner;

public class beecrowd_1216 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str;
        int des, c = 0, sum = 0;
        double ave = 0.0;

        while (scanner.hasNext()) {
            str = scanner.next();
            if (scanner.hasNextInt()) {
                des = scanner.nextInt();
                sum += des;
                c++;
            }
        }

        if (c != 0) {
            ave = (double) sum / c;
        }

        System.out.printf("%.1f\n", ave);
        scanner.close();
    }
}
