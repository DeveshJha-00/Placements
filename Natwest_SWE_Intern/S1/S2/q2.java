import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();

        Set<Integer> seen = new HashSet<>();
        for (int val : arr) {
            if (!seen.contains(val)) {
                System.out.print(val + " ");
                seen.add(val);
            }
        }
        
    }
}