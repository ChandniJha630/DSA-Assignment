class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int ans=m*n,min_m=INT_MAX,min_n=INT_MAX;
            for(int i=0;i<ops.size();i++){
                min_m=min(min_m,ops[i][0]);
                min_n=min(min_n,ops[i][1]);
                ans=min_m*min_n;
            }

        return ans;
    }
};