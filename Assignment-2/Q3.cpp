class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for( auto it: mp){
            if(mp.find(it.first+1)!=mp.end()){
                maxi=max(maxi,mp[it.first]+mp[it.first+1]);
            }
        }
        return maxi;
    }
};