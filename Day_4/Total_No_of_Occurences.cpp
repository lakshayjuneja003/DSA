int count(vector<int>& arr, int n, int x) {
	vector<int> ans;
	int start = 0 , end = n-1; 
    int mid = start + (end - start) / 2;
    // for first occurence 
    int ans1 = -1;
    while( start <= end ){
        if(arr[mid] == x){
            ans1 = mid;
            end = mid -1;
        }
        else if(x > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }

    // for second occurence 
    start = 0; end = n-1; 
    mid = start + (end - start) / 2;
    int ans2 = -1;
    while( start <= end){
        if(arr[mid] == x){
            ans2 = mid;
            start = mid + 1;
        }
        else if(x > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
	
	if(ans1 == -1 || ans2 == -1){
		return 0;
	}
	return (ans2 - ans1) + 1;
}
