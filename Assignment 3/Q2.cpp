class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            long long target3=target-nums[i];
            for(int j=i+1;j<n;j++){
                long long int target2=target3-nums[j];
                int front=j+1;
                int back=n-1;
                while(front<back){
                    int two_sum=nums[front]+nums[back];
                    if(two_sum>target2)back--;
                    else if (two_sum<target2)front++;
                    else{
                        vector<int>temp={nums[i],nums[j],nums[front],nums[back]};
                        ans.push_back(temp);
                         while(front<back && nums[front]==nums[front+1])front++;
                         while(front<back && nums[back]==nums[back-1])back--;
                         front++;
                         back--;
                    }
                }
               while(nums[j]==nums[j+1] && j<n)j++;   
            }
            while(nums[i]==nums[i+1] && i<n)i++;
           
        }
        return ans;
}
};