#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>&nums,int target){
    int low=0,high=nums.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    return -1;
}
int main(){
    int n,target;
    cin>>n;
    cin>>target;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<search(nums,target);
}