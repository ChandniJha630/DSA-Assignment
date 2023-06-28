#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> find_intervals(vector<int>nums,int l,int u){
   vector<vector<int>>ans;
   vector<int>temp(2);
    if(nums[0]!=l){
        temp[0]=l;
        temp[1]=nums[0]-1;
        ans.push_back(temp);
    }
   for(int i=0;i<nums.size()-1;i++){
   
    if(nums[i+1]-nums[i]>1){
        temp[0]=nums[i]+1;
        temp[1]=nums[i+1]-1;
        ans.push_back(temp);
    }
   
   }
    if(nums[nums.size()-1]<u){
        temp[0]=nums[nums.size()-1]+1;
        temp[1]=u;
        ans.push_back(temp);
    }
   return ans; 
}

int main(){

    vector<int>nums = {0,1,3,50,75};
    int lower=0;
    int upper=99;
    vector<vector<int>>ans=find_intervals(nums,lower,upper);
   for(int i=0;i<ans.size();i++){
    cout<<ans[i][0]<<" "<<ans[i][1] <<endl;
   }

    return 0;

}