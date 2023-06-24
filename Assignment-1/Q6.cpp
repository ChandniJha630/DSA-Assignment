class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int,int>mp;
        for (auto it:nums){
            mp[it]+=1;
        }
        for( auto m: mp){
            if (m.second>=2)
                return true;
        }
        return false;
    }
};
