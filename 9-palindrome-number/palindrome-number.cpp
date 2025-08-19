class Solution {
public:
    bool isPalindrome(int n) 
    {
        int orignal = n;
        long long reverse = 0;

        while( n > 0)
        {
           int lastDisit = n % 10;

            reverse = reverse * 10 + lastDisit;

            n = n / 10;

        }

        return orignal == reverse;
        
    }
};