class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0, high=0, sum=0;
        int min_length= INT_MAX;
        while(high<=nums.size()-1)
        {
            sum = sum + nums[high];
        while(sum>=target){
            sum = sum - nums[low];
            min_length=min(min_length, high-low+1);
            low++;
        }
        high++;
        }
        if(min_length==INT_MAX)
        return 0;

           return min_length;
    }
 
};