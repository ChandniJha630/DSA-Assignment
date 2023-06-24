class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
     bool ans=true;
    if(nums[nums.size()-1]>nums[0]){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]>=nums[i]){
                ans=true;
            }
            else{
                ans=false;
                break;
            }
        }
    }else{
          for(int i=0;i<nums.size()-1;i++){
              if(nums[i+1]<=nums[i]){
                ans=true;
            }
            else{
                ans=false;
                break;
            }
        }
    }

        return ans;
    }
};