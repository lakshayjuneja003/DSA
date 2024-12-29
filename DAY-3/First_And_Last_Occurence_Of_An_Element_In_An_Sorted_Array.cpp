pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> ans;
    int start = 0 , end = n - 1; 
    int ans1 = -1;
    int mid = start + (end - start)/2;

    // for first occurence 
    while( start <= end ){
        if(arr[mid] == k){
            ans1 = mid;
            end = mid -1;
        }
        else if(k > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    ans.first = ans1;
    // setting the pointers again for last occ
    start = 0; 
    end = n-1;
    int ans2 = -1;
    mid = start + (end - start)/2;

    // for second occurence 
    while( start <= end){
        if(arr[mid] == k){
            ans2 = mid;
            start = mid + 1;
        }
        else if(k > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    ans.second = ans2;
    return ans;
}
