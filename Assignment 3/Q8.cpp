#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool attend(vector<vector<int>> intervals){
    sort(intervals.begin(),intervals.end());
    for(int i=0;i<intervals.size();i++){
        if(intervals[i+1][0]<intervals[i][1]){
            return false;
        }
    }
    return true;
}

int main(){

    vector<vector<int>>intervals = {{0,30},{5,10},{15,20}};
    bool ans=attend(intervals);
    cout<<ans<<endl;

    return 0;

}