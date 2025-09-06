class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long xorall=0;
        for(int i=0;i<nums.size();i++) xorall = xorall^nums[i];     

        int rightmost = (xorall & (xorall-1)) ^ xorall;
        //int rightmost = xorall & -xorall;   //or this
        int b1 = 0, b2 = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i] & rightmost) b1 ^= nums[i];
            else b2 ^= nums[i];  
        }

        return {b1,b2};
    }
};