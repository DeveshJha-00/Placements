import java.util.*;

class q1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int max1 = Integer.MIN_VALUE, max2 = Integer.MIN_VALUE;
        int min1 = Integer.MAX_VALUE, min2 = Integer.MAX_VALUE;

        for (int i = 0; i < n; i++) {
            int val = sc.nextInt();
            if (val >= max1) {
                max2 = max1;
                max1 = val;
            } else if (val > max2) {
                max2 = val;
            }
            if (val <= min1) {
                min2 = min1;
                min1 = val;
            } else if (val < min2) {
                min2 = val;
            }
        }

        long prod1 = (long) max1 * max2;
        long prod2 = (long) min1 * min2;

        if (prod1 >= prod2) {
            System.out.println(max1 + max2);
        } else {
            System.out.println(min1 + min2);
        }
    }
    
}
