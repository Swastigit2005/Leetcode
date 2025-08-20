class Solution {
public:
    //Simple application of DP. 
    //Only recursion can also solve this but that would be taking too much time. 
    int climbStairs(int n) {
        if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 2;
        }

        int prev2 = 1; // Represents the number of ways to reach the (n-2)th step
        int prev1 = 2; // Represents the number of ways to reach the (n-1)th step
        int current;

        for (int i = 3; i <= n; ++i) {
            current = prev1 + prev2; // The number of ways to reach the ith step
            prev2 = prev1; // Update prev2 to the number of ways to reach the (i-1)th step
            prev1 = current; // Update prev1 to the number of ways to reach the ith step
        }

        return current;
    }
};