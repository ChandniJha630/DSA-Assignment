class Solution {
    bool find_dis(vector<int>&arr2,int num,int d){
        int low=0;
        int high=arr2.size()-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(abs(arr2[mid]-num)<=d)return false;
            else if(arr2[mid]>num){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return true;
    }
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int mid=arr2.size()/2;
        int low=0;
        int high=arr2.size()-1;
        int dist,c=0;
        for(auto it:arr1){
        if(find_dis(arr2,it,d)){
            c++;
        }
        }
    return c;
    }
};