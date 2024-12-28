// solution to the problem two sum with time complexity O(n) and space complexity O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m; // val to index
        for (int i=0; i < nums.size(); ++i) {
            int need = target - nums[i];
            if (m.find(need) != m.end()) {
                return {i, m[need]}; // return indices
            }
            m[nums[i]] = i;
        }
        return {};
        

    }
};

// another solution space complexity O(1) and time complexity O(n^2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    int i = 0; 
    int j = i+1;
    int n = nums.size();
     while(i < n && j < n){
      if(nums[i]+nums[j] == target){
        ans.push_back(i);
        ans.push_back(j);
         if(j+1 == n){
            i++;
            j = i+1;
         }
         else{
            j++;
         }
      }
      else{
         if(j+1 == n){
            i++;
            j = i+1;
         }
         else{
            j++;
         }
      }
   }
   return ans;
    }
};