int pivotIndex(int *arr , int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end -start)/2;
    while( start < end ){
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + ( end - start) / 2;
    }
    return start;
}
int BinarySearch(int *arr , int start , int end , int key){
    int s = start;
    int e = end;
    int mid = s + ( e - s ) / 2;
    while( s <= e){
        if(arr[mid] == key){
            return mid;
        }
        else if( key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
        mid = s + ( e -s ) / 2;
    }
    return -1;
}
int search(int* arr, int n, int key) {
    int pivot = pivotIndex(arr, n);
    if(key >= arr[pivot]  && key <= arr[n-1] ){
        return BinarySearch(arr, pivot , n-1 , key);
    }
    else{
        return BinarySearch(arr, 0, pivot , key);
    }
}


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            // Determine which part of the array is sorted
            if (nums[start] <= nums[mid]) {
                // Left part is sorted
                if (target >= nums[start] && target < nums[mid]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            } else {
                // Right part is sorted
                if (target > nums[mid] && target <= nums[end]) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }

        return -1; // Target not found
    }
};
