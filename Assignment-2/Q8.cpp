class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxi=nums[0];
        int mini=nums[0];
        for(int i=1;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }
        return mini>maxi? 0: maxi-mini-2*k;
    }
};