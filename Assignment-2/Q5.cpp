class Solution {
   
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      int p=0,prod=1,c=0;
      int q=nums.size()-1;
      while(q>=p && c<3){
        if( abs(nums[q])>=abs(nums[p])){
              prod*=nums[q];
              c+=1;
              q--;
          }
          else{
              prod*=nums[p];
              c+=1;
              p++;
          }


      }
      return prod;
      
    }
};