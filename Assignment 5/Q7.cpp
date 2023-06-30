class Solution {
public:
    int findMin(vector<int>& nums) {
        int high=nums.size()-1;
        int low=0;
        if(nums[high]>nums[low])return nums[low];
        int ans=nums[high];
        while(high>low){
            int mid=low+(high-low)/2;
            if(nums[mid]<nums[high]){
                ans=min(nums[mid],ans);
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};