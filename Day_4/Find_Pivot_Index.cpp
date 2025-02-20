class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0;
        int totalSum = 0;
        for(int i = 0; i < nums.size(); i++){
            totalSum += nums[i];
        }

        for (int i = 0 ; i < nums.size(); i++){
            if(leftSum == totalSum - leftSum - nums[i]){
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};