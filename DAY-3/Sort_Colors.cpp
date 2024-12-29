class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0;           // Pointer for 0
        int j = nums.size() - 1; // Pointer for 2
        int k = 0;           // Current index

        while (k <= j) {
            if (nums[k] == 0) {
                // Swap current element with the 0-pointer
                std::swap(nums[k], nums[i]);
                i++;
                k++;
            } else if (nums[k] == 2) {
                // Swap current element with the 2-pointer
                std::swap(nums[k], nums[j]);
                j--;
            } else {
                // Leave 1 in place
                k++;
            }
        }
    }
};
