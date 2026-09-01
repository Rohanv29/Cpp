#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int MaxGap(vector<int >&nums,int n){
    
    if(n<2) return 0;
    sort(nums.begin(),nums.end());
    int maxi=0;
    for(int i=1;i<n;i++){
        maxi=max(nums[i],nums[i-1]);
    }
    return maxi;

}
int main(){
    int n;
    cin>>n;
    vector<int >nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<MaxGap(nums,n);
    return 0;
}