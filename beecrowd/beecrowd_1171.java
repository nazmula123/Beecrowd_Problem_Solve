import java.util.Scanner;

public class beecrowd_1171 {

    public static void main(String[] args) {
        int a;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        int arr[] = new int[a + 2];
        for (int i = 0; i < a; i++) {
            arr[i] = sc.nextInt();
        }
        int n = a;
        quick(arr, 0, n);
        print(arr, a);
    }

    public static int partition(int a[], int start, int end) {
        int pivot = a[end];
        int i = (start - 1);

        for (int j = start; j <= end - 1; j++) {

            if (a[j] < pivot) {
                i++;
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        int t = a[i + 1];
        a[i + 1] = a[end];
        a[end] = t;
        return (i + 1);
    }

    public static void quick(int a[], int start, int end) {
        if (start < end) {
            int p = partition(a, start, end);
            quick(a, start, p - 1);
            quick(a, p + 1, end);
        }
    }

    public static int count(int a, int arr[], int s) {
        int c = 0;
        for (int i = 0; i < s; i++) {
            if (arr[i] == a) {
                c++;
            }
        }
        return c;
    }

    public static void print(int arr[], int a) {
        for (int i = 0; i < a; i++) {
            if (arr[i] != arr[i + 1]) {
                System.out.printf("%d aparece %d vez(es)\n", arr[i], count(arr[i], arr, a));
            }
        }
    }
}