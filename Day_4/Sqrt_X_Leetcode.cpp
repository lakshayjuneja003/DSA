class Solution {
public:
    int mySqrt(int x) {
        if(x == 0){
            return 0;
        }
        if(x == 1){
            return 1;
        }
        int s = 0 , e = x-1 , ans = 0;
        long mid = s + ( e - s) / 2 ;
        while( s <= e ){
            if(mid*mid == x){
                return mid;
            }
            else if(mid*mid > x){
                e = mid-1;
            }
            else if( mid * mid < x){
                ans = mid;
                s = mid + 1;
            }
             mid = s + ( e - s) / 2 ;
        }  
        return ans; 
    }
};