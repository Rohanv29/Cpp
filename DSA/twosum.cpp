#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int>TWOSUM(vector<int>&nums,int target){
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        int c=target-nums[i];
        if(mp.find(c)!=mp.end()){
            return{i,mp[c]};
        }
        mp[nums[i]]=i;
    }
    return{};
}
int main(){
    cout<<"enter target number"<<endl;
    vector<int>nums={1,2,4,3,6,7,9};
    int target;
    cin>>target;     
    vector<int>ans=TWOSUM(nums,target);
    cout<< ans[0]<<" "<<ans[1]<<endl;
    return 0;
}