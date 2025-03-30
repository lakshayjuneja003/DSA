class Solution {
    public void sortColors(int[] nums) {
        if (nums.length == 1) {
            return;
        }
        int i = 0; // Pointer for 0s
        int j = nums.length - 1; // Pointer for 2s
        int k = 0; // Current index
        
        while (k <= j) {
            if (nums[k] == 0) {
                // Swap nums[i] and nums[k]
                int temp = nums[i];
                nums[i] = nums[k];
                nums[k] = temp;
                i++;
                k++;
            } else if (nums[k] == 2) {
                // Swap nums[k] and nums[j]
                int temp = nums[k];
                nums[k] = nums[j];
                nums[j] = temp;
                j--;
            } else {
                k++;
            }
        }
    }
}
