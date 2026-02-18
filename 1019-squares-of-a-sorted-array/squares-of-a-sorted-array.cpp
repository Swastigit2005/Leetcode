class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> nums2;
        for(int i=0; i<n; i++){
            nums2.push_back(nums[i]);
        }
        for(int j=0; j<n; j++){
            nums2[j]= nums2[j]*nums2[j];
        }
        sort(nums2.begin(), nums2.end());
        return nums2;
    }
};