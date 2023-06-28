class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        long long answer=INT_MAX;
      for(int i=0;i<nums.size();i++){
          int s=i+1;
          int e=nums.size()-1;
          while(s<e){
              long long cursum=nums[s]+nums[e]+nums[i];
              if(abs(cursum-target)<=abs(answer-target)){
                  answer=cursum;
              }
              if(cursum>target)e--;
              else s++;
             
          }

      }
return answer;
    }
};