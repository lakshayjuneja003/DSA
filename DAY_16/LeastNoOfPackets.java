package DAY_16;

import java.util.Arrays;

public class LeastNoOfPackets {
    public static int minPackets(int n, int[] packets, int RC) {
        if (packets == null || packets.length == 0 || n <= 0 || RC <= 0) {
            return -1;
        }
        
        int count = 0;
        for (int i = packets.length - 1; i >= 0; i--) {
            while (RC >= packets[i]) {
                count++;
                RC -= packets[i];
            }
        }
        
        return RC == 0 ? count : -1;  
    }
    public static void main(String[] args) {
        int[] packets = {2, 3, 4, 5};
        int n = 4;
        int requiredCandies = 1;
        System.out.println(minPackets(n , packets , requiredCandies));
        return;
    }
}
