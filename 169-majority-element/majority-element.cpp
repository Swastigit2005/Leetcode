class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority=nums[0], votes=0;
        for(int i=0; i< nums.size();i++)
        {
            if (majority == nums[i])
            {
                votes++;
            }
            else if (votes ==0)
            {
            votes ++;
            majority = nums[i];
            }
            else
            {
                votes--;
            }
        }
    return  majority;}
};