class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int>mp;
        for(int i=0;i<candyType.size();i++){
            mp[candyType[i]]++;
        }
        int n=candyType.size();
        if(mp.size()>n/2)return n/2;
        else return mp.size();
    }
};