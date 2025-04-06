class Solution {
    public int strStr(String haystack, String needle) {
        int n = haystack.length();
        int k = needle.length();

        if (k == 0) return 0; // Edge case: empty needle
        if (n < k) return -1;

        for(int i = 0; i < n - k + 1; i++){
            int j = 0;
            while(j<k && haystack.charAt(i+j) == needle.charAt(j)){
                j++;
            }
            if(j == k){
                return i;
            }
        }
        return -1;

}};