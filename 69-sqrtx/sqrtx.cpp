class Solution {
public:
    int BinarySearch(int n) {
        int s = 0, e = n;
        int ans = -1;
        
        while (s <= e) {
            int mid = s + (e - s) / 2;
            long long sq = (long long)mid * mid; // prevent overflow
            
            if (sq == n) {
                return mid; 
            }
            else if (sq > n) {
                e = mid - 1;
            }
            else {
                ans = mid; 
                s = mid + 1;
            }
        }
        return ans;
    }

    int mySqrt(int x) {
        return BinarySearch(x);
    }
};
