#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
   int i = 0; 
   int j = i+1;
   int n = arr.size();
   while(i < n && j < n){
      if(arr[i]+arr[j] == s){
         vector<int> temp;
         temp.push_back(min(arr[i] , arr[j]));
         temp.push_back(max(arr[i] , arr[j]));
         ans.push_back(temp);
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
   sort(ans.begin() , ans.end());
   return ans;
}