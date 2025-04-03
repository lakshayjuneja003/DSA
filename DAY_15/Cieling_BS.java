package DAY_15;

public class Cieling_BS {
    public static void main(String[] args) {
        int[] arr = {1, 2, 8, 10, 10, 12, 16, 19};
        int x = 17;
        int start = 0;
        int end = arr.length - 1;

        while (start < end) {  
            int mid = start + (end - start) / 2;

            if (arr[mid] == x) {
                System.out.println("Ceiling of " + x + " is " + mid);
                return; 
            }

            if (arr[mid] < x) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        if (start < arr.length) {
            System.out.println("Ceiling of " + x + " is " + start);
        } else {
            System.out.println("No ceiling found for " + x);
        }
    }
}
