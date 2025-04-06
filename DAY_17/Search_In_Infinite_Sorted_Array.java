package DAY_17;
// time complexity is O(log n)
// space complexity is O(1)
public class Search_In_Infinite_Sorted_Array {
    public static int BinarySearch(int[] nums, int target , int start , int end) {
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1; // Target not found
    }
    public static int search(int[] nums, int target) {
        int start = 0; 
        int end = 1;
        while(target > nums[end]){
            int temp = end + 1;
            // double the size of the Search box
            end = end + ( end - start + 1) * 2;
            start = temp;
        }
        return BinarySearch(nums , target , start , end);
    }
    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int target = 7;
        int result = search(nums, target);
        if (result != -1) {
            System.out.println("Element found at index: " + result);
        } else {
            System.out.println("Element not found");
        }
    }
}
