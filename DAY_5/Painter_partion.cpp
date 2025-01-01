bool isPossible(vector<int>& arr, int n, int m , int mid){
    int PainterCount = 1;
    int boardSum = 0;
    for ( int i = 0; i < n; i++){
        if(boardSum + arr[i] <= mid){
            boardSum += arr[i]; 
        }
        else{
            PainterCount++;
            if(PainterCount > m || arr[i] > mid){
                return false;
            }
            boardSum = arr[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
   int n = boards.size();
   if(k > n){
       return -1;
   }
   int s = 0;
    int sum = 0;
    for ( int i = 0; i < n; i++){
        sum += boards[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + ( e - s ) / 2;
    while(s <= e){
        if(isPossible(boards, n , k , mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid + 1;
        }
        mid = s + ( e -s )/2;
    }
    return ans;
}