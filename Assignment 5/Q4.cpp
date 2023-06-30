class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1,s2;
        vector<int>temp;
        vector<vector<int>>ans;
        for(auto it: nums1){
            s1.emplace(it);
        }
        for(auto it:nums2){
            if(s1.count(it)){
                temp.push_back(it);
            }
            else s2.emplace(it);
        }

        for(auto it:temp){
            if(s1.count(it)){
                s1.erase(it);
            }
        }
        temp.clear();
        for(auto it : s1){
            temp.push_back(it);
        }

        ans.push_back(temp);
        temp.clear();
        for(auto it : s2){
            temp.push_back(it);
        }

        ans.push_back(temp);
        return ans;
    }
};