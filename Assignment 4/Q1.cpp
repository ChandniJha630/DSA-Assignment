#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
using namespace std;

vector<int> find_intersection(vector<int>a,vector<int>b,vector<int>c){
set<int>setC;
unordered_map<int,int>mp;
vector<int>ans;
for(auto it: c){
    setC.emplace(it);
}
for(auto it: a){
    mp[it]++;
}
for(auto it : b){
    if(mp[it]>0 && setC.count(it)){
        ans.push_back(it);
    }
}
return ans;
}

int main(){
    vector<int>a={1,2,3,4,5};
    vector<int>b={3,4,5,6,7};
    vector<int>c={4,5,6,7,8,9};
    vector<int>ans=find_intersection(a,b,c);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}