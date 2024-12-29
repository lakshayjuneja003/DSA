// time complexity of the above solution is O(nlogn) and space complexity is O(1)
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        if(nums.size() == 0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int start = 0 , end = nums.size() -1; 
        int mid = start + (end - start) / 2;
        // for first occurence 
        int ans1 = -1;
       while( start <= end ){
        if(nums[mid] == target){
            ans1 = mid;
            end = mid -1;
        }
        else if(target > nums[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    ans.push_back(ans1);

    // for second occurence 
    start = 0; end = nums.size() -1; 
    mid = start + (end - start) / 2;
    ans1 = -1;
    while( start <= end){
        if(nums[mid] == target){
            ans1 = mid;
            start = mid + 1;
        }
        else if(target > nums[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    ans.push_back(ans1);

    return ans;
    }
};