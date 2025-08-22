class Solution {
public:
int mySqrt(int x) {
        if(x == 0 || x == 1){
            return x;
        }

        int square = 0;
        int l = 0, h = x;
        long mid;
        while(l <= h){
            mid = l + (h - l)/2;
            if(mid * mid == x){
                square = mid;
                return square;
            }

            else if(mid * mid < x){
                l = mid + 1;
                square = mid;
            }

            else {
                h = mid - 1;
            }
        }
        return square;
    }
    bool isPerfectSquare(int num) {
        int ans = mySqrt(num);
        if(ans*ans == num){
            return true;
        }
        return false;
    }

};