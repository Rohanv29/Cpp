#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Remove(vector<int>&nums,int n){
    int minidx=0,maxidx=0;
    for(int i=0;i<n;i++){
        if(nums[i]<nums[minidx]) minidx=i;
        if(nums[i]>nums[maxidx]) maxidx=i;
    }
    if(minidx>maxidx) swap(minidx,maxidx); 
    int case1=maxidx+1;
    int case2=n-minidx;
    int case3 = (minidx + 1) + (n - maxidx);

    return min({case1,case2,case3});
}
int main(){
    int n;
    cin>>n;
    vector<int >nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<Remove(nums,n);
    return 0;
}