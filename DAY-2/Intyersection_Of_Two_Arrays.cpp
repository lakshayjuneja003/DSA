class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> ans;
        vector<int> result;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0, j = 0;
        int n = nums1.size(), m = nums2.size();

        while (i < n && j < m) {
            if (nums1[i] == nums2[j]) {
                ans.insert(nums1[i]);
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }

        // Transfer set elements to vector
        for (auto& val : ans) {
            result.push_back(val);
        }
        return result;
    }
};
